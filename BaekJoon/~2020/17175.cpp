#include <iostream>

using namespace std;

const int MAX_SIZE = 51;
const int divisionInt = 1000000007;

int main(){

  int N;
  cin >> N;

  int d[MAX_SIZE];

  d[0] = d[1] = 1;
  for (int i = 2; i <= 50; i++) {
  	d[i] = 1;
  	d[i] += (d[i - 1] % divisionInt + d[i - 2] % divisionInt) % divisionInt;
  }

  cout << d[N] % divisionInt << '\n';

  return 0;
}
