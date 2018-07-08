#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_SIZE  = 100;

const int dy[4]={1, -1, 0, 0};
const int dx[4]={0, 0, 1, -1};

int map[MAX_SIZE][MAX_SIZE]={ 0, };
int mark[MAX_SIZE][MAX_SIZE]={ 0, };

int dfs(int y, int x, int M, int N);


int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int M, N, K;
  cin >> M >> N >> K;

  int x1, y1, x2, y2;

  for(int i = 0; i < K; i++){
    cin >> x1 >> y1 >> x2 >> y2;

    for(int x = x1; x < x2; x++){
      for(int y = y1; y < y2; y++){
        map[y][x]++;
      }
    }
  }

  vector <int> result;

  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      if(!map[i][j] && !mark[i][j]){
        mark[i][j]++;
        result.push_back(dfs(i, j, M, N));
      }
    }
  }

  cout<< result.size() << endl;

  sort(result.begin(), result.end());

  for(int i=0;i<result.size();i++){
    cout << result[i] << " ";
  }
  cout << '\n';

  return 0;
}

int dfs(int y, int x, int M, int N){

  int count = 1;

  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];

    if(ny < 0 || ny >= M || nx < 0 || nx >= N || map[ny][nx] || mark[ny][nx]) continue;

    mark[ny][nx]++;
    count += dfs(ny, nx, M, N);
  }

    return count;
}
