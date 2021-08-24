#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

const int MAX_SIZE = 102;

void DFS(int x, int y, int mark[][MAX_SIZE], int arr[][MAX_SIZE]);
void Flooding(int h, int mark[][MAX_SIZE], int arr[][MAX_SIZE], int size);
int Counting(int mark[][MAX_SIZE], int check[][MAX_SIZE], int size);

int main(){

  int size;
  int max = 0;
  int result = 0;
  int extracting;
  int map[MAX_SIZE][MAX_SIZE] = { 0, };
  int mark[MAX_SIZE][MAX_SIZE] = { 0, };
  int check[MAX_SIZE][MAX_SIZE] = { 0, };

  cin >> size;

  for(int i = 1; i < size + 1; i++){
    for(int j = 1; j < size + 1; j++){
      int num;
      cin >> num;
      map[i][j] = num;
      if(num > max){
        max = num;
      }
    }
  }

  for(int i = 0; i <= size + 1; i++){
    mark[0][i] = -1;
    mark[i][0] = -1;
    mark[size+1][i] = -1;
    mark[i][size+1] = -1;
  }



  for(int i = 0; i < max+1; i++){
    Flooding(i, mark, map, size);
    extracting = Counting(mark, check, size);
    if(result < extracting){
      result = extracting;
    }
    for(int j = 0; j < MAX_SIZE; j++){
      for(int k = 0; k < MAX_SIZE; k++){
        check[j][k] = 0;
      }
    }

  }

  cout << result << endl;


}

int Counting(int mark[][MAX_SIZE], int check[][MAX_SIZE], int size){

  int count = 0;

  for(int i = 1; i < size + 1; i++){
    for(int j = 1; j < size + 1; j++){
      if(check[i][j] == 0 && mark[i][j] == 0){
        check[i][j] == 1;
        count++;
        DFS(i, j, check, mark);
      }

    }
  }

  return count;

}

void Flooding(int h, int mark[][MAX_SIZE], int arr[][MAX_SIZE], int size){

  for(int i = 1; i < size + 1; i++){
    for(int j = 1; j < size + 1; j++){
      if(arr[i][j] <= h){
        mark[i][j] = 1;
      }
    }
  }



}

void DFS(int x, int y, int mark[][MAX_SIZE], int arr[][MAX_SIZE]){


  for(int i = 0; i < 4; i++){

    int _x = x + dx[i];
    int _y = y + dy[i];

    if(mark[_x][_y] == 0 && arr[_x][_y] == 0){
      mark[_x][_y] = 1;
      DFS(_x, _y, mark, arr);
    }

  }

}
