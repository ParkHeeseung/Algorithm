#include <iostream>

using namespace std;

int combination(int n, int r);



int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases --){

    int N, M;

    cin >> N >> M;


    cout << combination(N > M ? N : M, N < M ? N : M) << "\n";


  }


  return 0;
}

int combination(int n, int r)
{
    if(n == r || r == 0) return 1;
    else
      return combination(n - 1, r - 1) + combination(n - 1, r);
}
