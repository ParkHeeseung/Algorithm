#include <iostream>

using namespace std;

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int A, B, V;

  cin >> A >> B >> V;

  cout << (V - B - 1) / (A - B) + 1 << endl;


  return 0;
}
