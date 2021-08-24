#include <cstdio>
#include <algorithm>
#include <cstring>

#define INF 987654321

using namespace std;

int func(int x, int y, int n);

const int MAX_SIZE = 2001;

int DP[MAX_SIZE][MAX_SIZE];
int A[MAX_SIZE];
int B[MAX_SIZE];

int main(){

  memset(DP, -1, sizeof(DP));

  int N;
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < N; i++){
    scanf("%d", &B[i]);
  }

  printf("%d\n", func(0, 0, N));

  return 0;
}

int func(int x, int y, int n){

  int score = DP[x][y];

  if (x == n || y == n) return 0;
  if (score != -1) return score;

  score = max(func(x + 1, y, n), func(x + 1, y + 1, n));

  if (A[x] > B[y]){
    score = max(score, func(x, y + 1, n) + B[y]);
  }

  return score;
}
