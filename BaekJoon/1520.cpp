#include <iostream>

using namespace std;

const int MAX_SIZE = 501;
const int _x[] = {1, 0, -1, 0};
const int _y[] = {0, 1, 0, -1};

int DFS(int x, int y, int N, int M, int map[][MAX_SIZE], int dp[][MAX_SIZE]);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int map[MAX_SIZE][MAX_SIZE];
  int dp[MAX_SIZE][MAX_SIZE];
  int M, N;

  cin >> M >> N;

  for(int i = 0; i < M; i++){
    for (int j = 0; j < N; j++){
      cin >> map[i][j];
      dp[i][j] = -1;
    }
  }

  cout << DFS(M-1, N-1, M, N, map, dp) << endl;

  return 0;
}


int DFS(int x, int y, int M, int N, int map[][MAX_SIZE], int dp[][MAX_SIZE]){

  if (dp[x][y] != -1) return dp[x][y];
  if (x < 0 || x >= M || y < 0 || y >= N) return 0;
  if (x == 0 && y == 0) return 1;

  dp[x][y] = 0;

  for (int i = 0; i < 4; i++){
    int dx = x + _x[i];
    int dy = y + _y[i];

    if (map[dx][dy] > map[x][y]){
        dp[x][y] += DFS(dx, dy, M, N, map, dp);
    }
  }

  return dp[x][y];
}
