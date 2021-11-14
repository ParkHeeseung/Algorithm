#include <iostream>

using namespace std;

int getResult (int k, int n){

  if(n == 1) return 1;
  if(k == 0) return n;

  return getResult(k-1, n) + getResult(k, n-1);
}

int main (){

  int T, k, n;

  cin >> T;

  
  for(int i = 0; i < T; i++) {
    cin >> k >> n;
    cout << getResult(k, n) << '\n';

  }

  return 0;
}