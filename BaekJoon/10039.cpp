#include <iostream>

using namespace std;

int main(){

  int sum = 0;
  for(int i = 0; i < 5; i++){
    int input;
    cin >> input;

    if (input < 40) input = 40;

    sum += input;
  }

  cout << sum / 5;

  return 0;
}
