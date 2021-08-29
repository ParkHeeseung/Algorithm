#include <iostream>

using namespace std;

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  long long A, B, C;
  cin >> A >> B >> C;

  long long total = A;
  long long res = 0;

  if(B >= C) cout << -1 << '\n';
  else {
    cout << A / (C - B) + 1 << '\n'; 
  }

  return 0;
}