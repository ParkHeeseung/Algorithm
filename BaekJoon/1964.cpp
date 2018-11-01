#include <iostream>

using namespace std;

int main(){


  ios::sync_with_stdio(false);
  cin.tie(0);

  register int N, result = 0;
  cin >> N;

  for(int i = 1, j = 4; i <= N; i++, j += 3) result = (result + j) % 45678;

  cout << result + 1 << endl;

  return 0;
}
