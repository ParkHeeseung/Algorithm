#include <iostream>

using namespace std;

const int MAX_SIZE = 10;
int chess[MAX_SIZE][MAX_SIZE];
int visit[100];

int DFS(int n, int N);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> chess[i][j];
    }
  }

  cout << DFS(0, N) + DFS(1, N) << "\n";

  return 0;


}

int DFS(int n, int N){

  if(n >= 2 * N - 1) return 0;

  int max = -1;

  int y = n < N ? n : N - 1;
  int x = n < N ? 0 : n - (N - 1);

  while(y >= 0 && x < N){
    if(chess[y][x] == 1 && visit[x - y + N] == 0){
      visit[x - y + N] = 1;
      int temp = DFS(n + 2, N) + 1;
      if(max < temp) max = temp;
      visit[x - y + N] = 0;
    }
    x++;
    y--;
  }

  if(max < 0) max = DFS(n + 2, N);

  return max;
}
