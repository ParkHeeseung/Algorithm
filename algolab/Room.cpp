#include <cstdio>
#include <vector>
#include <stack>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAX_SIZE = 102;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, -1, 0, 1};

void init(char map[][MAX_SIZE], int mark[][MAX_SIZE], int m, int n);
void dfs(char map[][MAX_SIZE], int mark[][MAX_SIZE], int m, int n);
int main(){

  int numTestCases;
  scanf("%d\n", &numTestCases);

  while(numTestCases --){

    char map[MAX_SIZE][MAX_SIZE] = { 0, };
    int mark[MAX_SIZE][MAX_SIZE] = { 0, };

    for(int i = 0 ; i < MAX_SIZE ; i++)
    {
      for(int j = 0 ; j < MAX_SIZE ; j++)
      {
        mark[i][j] = 0;
      }
    }

    int m, n;
    scanf("%d%d", &n, &m);

    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        cin >> map[i][j];
      }
    }

    init(map, mark, m, n);
    dfs(map, mark, m, n);

  }


  return 0;
}

void init(char map[][MAX_SIZE], int mark[][MAX_SIZE], int m, int n){

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(map[i][j] == '+'){
        mark[i][j] = -1;
      }
    }
  }

}

void dfs(char map[][MAX_SIZE], int mark[][MAX_SIZE], int m, int n){

  vector <int> result(102);
  stack <pair <int, int> > st;

  int size = 0;

  for(int i = 1; i < m - 1; i++){
    for(int j = 1; j < n - 1; j++){
      int count = 0;
      if(map[i][j] == '.' && mark[i][j] != -1){
        st.push(make_pair(i, j));
        count ++;
        mark[i][j] = -1;
        int x = i;
        int y = j;
        while(!st.empty()){
          for(int k = 0; k < 4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(map[nx][ny] == '.' && mark[nx][ny] != -1){
              st.push(make_pair(nx, ny));
              count ++;
              mark[nx][ny] = -1;
              x = nx;
              y = ny;
              break;
            }

            if(k == 3){
              pair <int, int> temp;
              temp = st.top();
              st.pop();
              x = temp.first;
              y = temp.second;
            }
          }
        }

        result.push_back(count);
        size ++;

      }
    }
  }

  sort(result.begin(), result.end(), greater<int>() );
  printf("%d\n", size);

  for(int i = 0; i < size; i++){
    printf("%d ", result.at(i));
  }
  printf("\n");
}
