#include <iostream>

using namespace std;

void func(int input);

int main(){

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases --){

    int input;
    cin >> input;
    func(input);
  }


  return 0;
}

void func(int input){

  int result = 0;
  for (int i = 5; i <= input; i *= 5) {
    result += input / i;

  }

  cout << result << endl;

}
