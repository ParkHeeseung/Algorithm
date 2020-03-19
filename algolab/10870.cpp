#include <iostream>

using namespace std;

int func(int n);
int main() {

  int n;
  cin >> n;

  cout << func(n) << endl;

}

int func(int n) {
  
  if (n == 0) return 0;
  else if (n == 1) return 1;

  return func(n - 1) + func(n - 2);
}