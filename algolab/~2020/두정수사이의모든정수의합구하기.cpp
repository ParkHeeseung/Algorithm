#include <iostream>
#include <fstream>

using namespace std;

int allSum(int a, int b);

int main(){


  int numTestCases;
  cin >> numTestCases;

  for(int i = 0; i < numTestCases; i++){
    int a, b;
    cin >> a >> b;
    cout << (a + b) * (b - a) / 2 << '\n';
  }


  return 0;
}
