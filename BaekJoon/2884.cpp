#include <iostream>

using namespace std;

int main() {

  int H, M;
  cin >> H >> M;

  int min = H * 60 + M - 45;

  if(min < 0) {
    cout << 23 << endl;
    cout << 60 + min << endl;
  }
  else{
    cout << min / 60 << endl;
    cout << min % 60 << endl;
  }

  return 0;
}