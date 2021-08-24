#include <iostream>

using namespace std;

int main(){


  int a, b;
  cin >> a >> b;

  int c = b % 10;
  int d = b / 10 % 10;
  int e = b / 100 % 10;

  cout << c * a << endl;
  cout << d * a << endl;
  cout << e * a << endl;
  cout << a * b << endl;

  return 0;
}