#include <iostream>

using namespace std;

int main(){

  // N : 끊어진 기타줄
  // M : 브랜드 수
  int N, M;
  cin >> N >> M;

  int a = 9999999;
  int b = 9999999;

  for(int i = 0; i < M; i++){
    int inputA, inputB;
    cin >> inputA >> inputB;
    if(inputA < a) a = inputA;
    if(inputB < b) b = inputB;
  }

  int ans = 0;
  if(a < b * 6) ans += a * (N / 6);
  else{
    ans += b * N;
    cout << ans << endl;
    return 0;
  }

  N %= 6;

  if(a > N*b) ans += N * b;
  else ans += a;

  cout << ans << endl;

  return 0;

}
