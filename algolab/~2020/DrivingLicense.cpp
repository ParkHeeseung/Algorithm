#include <cstdio>

using namespace std;

int Dp[101][101][201][2];

int main(){

  int numTestCases;
    scanf("%d", &numTestCases);
    while(numTestCases--){
      int row[101][101];
      int col[101][101];
      int M, N, L, G;
      scanf("%d %d %d %d", &M, &N, &L, &G);
      int maxturn = N < M ? 2 * N : 2 * M;
      for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
          for(int t = 0; t <= maxturn; t++){
            Dp[i][j][t][0] = 0xfffffff;
            Dp[i][j][t][1] = 0xfffffff;
          }
        }
      }
      for(int i = 0; i < M; i++){
        for(int j = 1; j < N; j++)
          scanf("%d", &row[i][j]);
      }
      for(int i = 1; i < M; i++){
        for(int j = 0; j < N; j++)
          scanf("%d", &col[i][j]);
      }

      Dp[0][0][0][0] = 0;
      Dp[0][0][0][1] = 0;

      for(int i = 1; i < M; i++)
        Dp[i][0][0][1] = col[i][0] + Dp[i - 1][0][0][1];
      for(int i = 1; i < N; i++)
        Dp[0][i][0][0] = row[0][i] + Dp[0][i - 1][0][0];

      for(int i = 1; i < M; i++){
        for(int j = 1; j < N; j++){
          int range = i < j ? 2 * i : 2 * j;
          for(int t = 1; t <= range; t++){
            Dp[i][j][t][0] = Dp[i][j - 1][t][0] < Dp[i][j - 1][t - 1][1] \
             ? Dp[i][j - 1][t][0]+row[i][j] : Dp[i][j - 1][t - 1][1]+row[i][j];
            Dp[i][j][t][1] = Dp[i - 1][j][t - 1][0] < Dp[i - 1][j][t][1] \
             ? Dp[i - 1][j][t - 1][0]+col[i][j] : Dp[i - 1][j][t][1]+col[i][j];
          }
        }
      }
      bool check = false;
      int range = N < M ? N * 2 : M * 2;
      for(int i = 0; i <= range; i++){
        if(Dp[M - 1][N - 1][i][0] <= G || Dp[M - 1][N - 1][i][1] <= G){
          check = true;
          printf("%d\n", L*(N + M - 2) + i);
          break;
        }
      }
      if(!check)
        printf("-1\n");
    }

    return 0;
}
