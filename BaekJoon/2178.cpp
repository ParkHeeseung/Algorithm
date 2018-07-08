#include <iostream>
#include <queue>

using namespace std;

const int MAX_SIZE = 101;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

char map[MAX_SIZE][MAX_SIZE];
int mark[MAX_SIZE][MAX_SIZE] = { 0, };

struct point{
  int x;
  int y;
  int z;
};

int bfs(int N, int M);



int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    cin >> map[i];
  }

  cout << bfs(N, M) << endl;

  return 0;
}

int bfs(int N, int M){

  queue <point> q;
  point p;
  p.x = 0; p.y = 0; p.z = 1;

  q.push(p);
  mark[0][0] = 1;

  while(!q.empty()) {

    int x = q.front().x;
    int y = q.front().y;
    int z = q.front().z;

    q.pop();

    if(x == M - 1 && y == N - 1) return z;

    for(int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if(nx < 0 || ny < 0 || nx >= M || ny >= N || mark[ny][nx] == 1 || map[ny][nx] != '1') continue;

      p.x = nx; p.y = ny; p.z = z+1;

      q.push(p);
      mark[ny][nx] = 1;
    }
  }
}
