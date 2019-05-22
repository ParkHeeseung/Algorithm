#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b){
  if(b == 0) return a;
  else return gcd(b, a%b);
}

int main(){

  long long int A, B;
  cin >> A >> B;

  long long int C = gcd(A, B);

  for(long long int i = 0; i < C; i++){
    cout << 1;
  }

  return 0;
}
