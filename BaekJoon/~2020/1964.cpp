#include <iostream>

using namespace std;

int main(){


  ios::sync_with_stdio(false);
  cin.tie(0);

  long long int N, R;
  cin >> N;

  R = (1 + N * (8 + (N - 1) * 3) / 2) % 45678;
  cout <<  R << endl;

  return 0;
}
