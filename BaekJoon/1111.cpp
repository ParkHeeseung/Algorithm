#include <iostream>

using namespace std;

int main(){


  int N;
  cin >> N;

  int arr[N];

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  if(N == 1){
    cout << "A" << endl;
    return 0;
  }
  if(N == 2){
    if(arr[0] == arr[1]){
      cout << arr[0];
      return 0;
    }
    cout << "A" << endl;
    return 0;
  }

  int r;
  if (arr[1] == arr[0]) r = 0;
    else r = (arr[2] - arr[1]) / (arr[1] - arr[0]);

  int d = arr[1] - arr[0] * r;

  for (int i = 2; i < N; i++) {
    if ((arr[i-1] != arr[i-2]) && (r != (arr[i] - arr[i-1]) / (arr[i - 1] - arr[i - 2]))) {
      cout << "B" << endl;
      return 0;
    }
    if (d != arr[i] - arr[i - 1] * r) {
      cout << "B" << endl;
      return 0;
      }
    }



  cout << arr[N - 1] * r + d << endl;

  return 0;
}
