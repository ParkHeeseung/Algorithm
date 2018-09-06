#include <iostream>

using namespace std;

const int MAX_SIZE = 41;

int fibonacci(int n);

int zeroCount = 0;
int oneCount = 0;

int DP[MAX_SIZE] = { 1, 1};

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);


  int numTestCases, input;
  cin >> numTestCases;


  while (numTestCases --) {
    cin >> input;


    if(!input){
      cout << 1 << " " << 0 << "\n";
    }
    else if(input == 1){
      cout << 0 << " " << 1 << "\n";
    }
    else{
      fibonacci(input);
      cout << DP[input - 2] << " " << DP[input - 1] << "\n";

    }
  }

}

int fibonacci(int n) {

  if(n <= 1) return DP[n];
  else{
    if(DP[n] > 0) return DP[n];
  }
    return DP[n] = fibonacci(n - 1) + fibonacci(n - 2);

}
