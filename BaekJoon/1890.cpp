#include <stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX_SIZE = 101;

void DFS(int n);

long long int DP[MAX_SIZE][MAX_SIZE];
int map[MAX_SIZE][MAX_SIZE];

int main(){

  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &map[i][j]);
    }
  }

  DFS(n);

  printf("%lld", DP[n - 1][n - 1]);

  return 0;
}

void DFS(int n){

  DP[0][0] = 1;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int next = map[i][j];

      if (i != n - 1 && i + next < n){
        DP[i + next][j] += DP[i][j];
      }

      if (j != n - 1 && j + next < n){
        DP[i][j + next] += DP[i][j];
      }
    }
  }

}
