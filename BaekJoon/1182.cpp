#include <iostream>

using namespace std;

const int MAX_SIZE = 21;

int arr[MAX_SIZE];
int N, S, result;


void dfs(int idx, int sum);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> S;

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  dfs(1, 0);
  dfs(1, arr[0]);

  if (S == 0) result--;

  cout << result << endl;

  return 0;


}

void dfs(int idx, int sum)
{
    if (idx >= N) {
        if (sum == S) result++;
        return;
    }

    dfs(idx + 1, sum);
    dfs(idx + 1, sum + arr[idx]);
}
