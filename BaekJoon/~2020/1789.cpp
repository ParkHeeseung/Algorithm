#include <iostream>

using namespace std;

int main(){


  ios::sync_with_stdio(false);
  cin.tie(0);

  int S;
  cin >> S;

  long long int a = 1, n, sum = 0;

  while(sum <= S){
    sum += a++;
  }

  cout << a - 2 << endl;

  return 0;
}
