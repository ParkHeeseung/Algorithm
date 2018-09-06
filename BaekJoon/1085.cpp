#include <iostream>

using namespace std;


int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int x[2]; int y[2];


  cin >> x[0] >> y[0] >> x[1] >> y[1];

  int arr[] = {0, 0, x[1], y[1]};

  int result = x[0] < y[0] ? x[0] : y[0];


  result = result < x[1] - x[0] ? result : x[1] - x[0];
  result = result < y[1] - y[0] ? result : y[1] - y[0];

  cout << result << endl;

  return 0;
}
