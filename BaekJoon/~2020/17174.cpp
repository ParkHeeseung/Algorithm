#include <iostream>

using namespace std;

int sol(int n, int m);

int main(){

  int N, M;

  cin >> N >> M;

  cout << sol(N, M);

  return 0;

}

int sol(int n, int m){
  if (n == 0) return 0;
  return n + sol(n / m, m);
}
