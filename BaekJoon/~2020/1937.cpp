#include <cstdio>

using namespace std;

void dfsMap(int y, int x, int N);

const int MAX_SIZE = 501;
const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};

int map[MAX_SIZE][MAX_SIZE];
int dp[MAX_SIZE][MAX_SIZE];

int max = 0;

int main(){

  int numSize;
  scanf("%d", &numSize);

  for(int i = 0; i < numSize; i++){
    for(int j = 0; j < numSize; j++){
      scanf("%d", &map[i][j]);
    }
  }

  for(int i = 0; i < numSize; i++){
    for(int j = 0; j < numSize; j++){
      if(dp[i][j] == 0) dfsMap(i, j, numSize);
    }
  }

  printf("%d\n", max);


return 0;

}

void dfsMap(int y, int x, int N){

    int _x, _y;
    int value = 0;

    for(int i = 0;i < 4; i++)
    {
        _x = x + dx[i];
        _y = y + dy[i];

        if(_x >= N || _x < 0 || _y >= N || _y < 0) continue;

        if(map[_y][_x] < map[y][x]){
          if(dp[_y][_x] == 0) dfsMap(_y, _x, N);

          if(value<dp[_y][_x]) value=dp[_y][_x];
        }

    }

    dp[y][x] = value + 1;

    if(max < dp[y][x]) max = dp[y][x];
}
