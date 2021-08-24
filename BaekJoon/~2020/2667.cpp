#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

const int MAX_SIZE = 27;

void DFS(int x, int y, int mark[][MAX_SIZE], int arr[][MAX_SIZE], int index);


int main(){

  int size;
  int count = 0;
  int map[MAX_SIZE][MAX_SIZE] = { 0, };
  int mark[MAX_SIZE][MAX_SIZE] = { 0, };

  scanf("%d", &size);

  for(int i = 1; i < size + 1; i++){
    for(int j = 1; j < size + 1; j++){
        scanf("%1d", &map[i][j]);
    }
  }

  for(int m = 1; m < size+1; m++){
    for(int n = 1; n < size+1; n++){
      if(mark[m][n] == 0 && map[m][n] == 1){
        mark[m][n] == 1;
        count ++;
        map[m][n] = count;
        DFS(m, n, mark, map, count);
      }
    }
  }

  int result[count] = { 0, };

  for(int i = 1; i < size + 1; i++){
    for(int j = 1; j < size + 1; j++){
      for(int k = 1; k <= count; k++){
        if(map[i][j] == k){
          result[k-1] ++;
        }
      }
    }
  }

  sort(result, result + count);

  cout << count << endl;

  for(int i = 0; i < count; i++)
    cout << result[i] << endl;

}

void DFS(int x, int y, int mark[][MAX_SIZE], int arr[][MAX_SIZE], int index){


  for(int i = 0; i < 4; i++){

    int _x = x + dx[i];
    int _y = y + dy[i];

    if(mark[_x][_y] == 0 && arr[_x][_y] == 1){
      mark[_x][_y] = 1;
      arr[_x][_y] = index;
      DFS(_x, _y, mark, arr, index);
    }

  }

}
