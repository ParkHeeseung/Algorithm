#include <iostream>

using namespace std;

int factorial(int n);

int main(){

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases--){

    int input;
    cin >> input;
    cout << factorial(input) << endl;

  }

  return 0;
}

int factorial(int n) {

  if (n == 0) return 0;
  else if (n == 1) return 1;
  else return n * factorial(n - 1);

}
