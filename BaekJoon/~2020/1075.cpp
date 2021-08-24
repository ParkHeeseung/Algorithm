#include <iostream>

using namespace std;

int main(){


  int N, F;

  cin >> N >> F;

  N /= 100;
  N *= 100;

  for(int i = 0; i < 100; i++){
    if(N % F == 0) break;
    N++;
  }

  N %= 100;

  if(N < 10){
    cout << 0;
    cout << N;
  }
  else cout << N;

  return 0;
}
