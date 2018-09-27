#include <iostream>

using namespace std;

int pow(int n, int k, int c);

int main(){

  int A, B, C;

  cin >> A >> B >> C;

  cout << pow(A, B, C) << endl;
}

int pow(int n, int k, int c){

    if(k == 0) return 1;

    int num = pow(n, k/2, c);

    int result = 1LL * num * num % c;

    if(k % 2){
      result = 1LL * result * n % c;
    }

    return result;
}
