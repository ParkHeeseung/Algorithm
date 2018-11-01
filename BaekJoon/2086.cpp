#include <iostream>

using namespace std;

int main(){

  cin.tie(NULL);
  ios::sync_with_stdio(false);

  long long unsigned int a, b;

  long long unsigned int result = 0;

  cin >> a >> b;

  b %= 1000000000;

  int num1 = 0, num2 = 1;

  for(long long unsigned int i = 2; i < a; i++){
    int temp = num2;
    num2 = num1 + num2;
    num1 = temp;

  }

  for(long long unsigned int i = a; i <= b; i++){
    int temp = num2;
    num2 = num1 + num2;
    num1 = temp;
    result += num2;
  }

  cout << result << endl;

  return 0;
}
