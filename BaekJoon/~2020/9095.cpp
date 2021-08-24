#include <iostream>

using namespace std;

const int MAX_SIZE = 12;

int main() {

  int T;
  cin >> T;

  int dp[MAX_SIZE] = { 0, };
  dp[0] = 1;

  for (int j = 1; j <= MAX_SIZE; j++) {
    if (j - 1 >= 0)
      dp[j] += dp[j - 1];
    if (j - 2 >= 0)
      dp[j] += dp[j - 2];
    if (j - 3 >= 0)
      dp[j] += dp[j - 3];
  }

  for (int i = 0; i < T; i++) {
    int n;
    cin >> n;
    cout << dp[n] << endl;
  }

  return 0;
}