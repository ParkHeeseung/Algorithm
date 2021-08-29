#include <iostream>

using namespace std;

const int MIN = -1000000;
const int MAX = 1000000;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, min = MAX, max = MIN;

  cin >> N;

  while (N--) {
    int M;
    cin >> M;

    if(min > M) min = M;

    if(max < M) max = M;    

  }

  cout << min << " " << max << '\n';
  
  return 0;
}