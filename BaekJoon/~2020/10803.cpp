#include <iostream>
#include <algorithm>
#include <cstring>

#define INF 987654321

using namespace std;

int N, M;

int dp[10001][101];

int func(int x, int y);


int main(){

  memset(dp, -1, sizeof dp);

  cin >> N >> M;

  cout << func(N, M);

  return 0;

}

int func(int x, int y) {

    if (x == y) return dp[x][y] = 1;

    if (x < 0 || y < 0) return INF;

    int ret = dp[x][y];

    if (ret != -1) return ret;

    ret = x * y;


    if (x >= 4 * y) ret = min(ret, func(x - y, y) + 1);

    else {

        for (int ny = 1;ny <= (y + 1) / 2;ny++)

            ret = min(ret, func(x, ny) + func(x, y - ny));

        for (int nx = 1; nx <= (x + 1) / 2;nx++)

            ret = min(ret, func(nx, y) + func(x - nx, y));

    }

    return ret;

}
