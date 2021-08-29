#include <iostream>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);


  while (true) {

    int A, B;
    cin >> A >> B;

    if(!A && !B) break;

    cout << A + B << '\n';
  }

  return 0;
}