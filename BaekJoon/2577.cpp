#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int A, B, C;
  int result[10] = { 0, };

  cin >> A >> B >> C;
  A = A * B * C;

  while(A / 10 != 0){
    result[A % 10]++;
    A /= 10;
  }

  result[A % 10]++;

  for(int i = 0; i < MAX_SIZE; i++){
    cout << result[i] << '\n';
  }

  return 0;

}
