#include <iostream>

using namespace std;

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  int arr[42] = { 0 };
  int result = 0;

  for(int i = 0; i < 10; i++){

    cin >> N;

    arr[N % 42] = 1;

  }

  for(int i = 0; i < 42; i++) {
    if(arr[i]) result ++;
  }

  cout << result << '\n';

  return 0;
}