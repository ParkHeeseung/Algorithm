#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>

using namespace std;

#define INF 987654321

const int MAX_SIZE = 502;

int dp[MAX_SIZE][MAX_SIZE];
int arr[MAX_SIZE];
int temp[MAX_SIZE];

int main(){
    int numTestCases;
    scanf("%d", &numTestCases);

    while (numTestCases--){
        memset(dp, 0, sizeof(dp));
        memset(arr, 0, sizeof(arr));

        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
            temp[i] = temp[i - 1] + arr[i];
        }

        for (int i = 2; i <= n; i++){
            for (int j = i - 1; j > 0; j--){
                dp[j][i] = INF;
                for (int k = j; k <= i; k++){
                  dp[j][i] = min(dp[j][i], dp[j][k] + dp[k + 1][i]);
                }

                dp[j][i] += temp[i] - temp[j - 1];
            }
        }

        printf("%d\n", dp[1][n]);

    }
    return 0;
}
