#include <iostream>

using namespace std;

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  int max = -1;
  int result;


  for(int i = 0; i < 9; i++){

    cin >> N;

    if(max < N) {
      max = N;
      result = i;
    }
  }

  cout << max << '\n';
  cout << result + 1;

  return 0;
}