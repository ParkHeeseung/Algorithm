#include <iostream>

using namespace std;

long long DP[30][30];

long long medison(int f, int h){

  long long &result = DP[f][h];

  if(f == 0 && h == 0) return 1;
  if (result != 0) return result;
  if (f != 0) result += medison(f - 1, h + 1);
  if (h != 0) result += medison(f, h - 1);

  return result;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;

  while(cin >> n){
    if (n == 0) break;
    else cout << medison(n, 0) << '\n';
  }

  return 0;

}
