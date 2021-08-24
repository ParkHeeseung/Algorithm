#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 200001;

int arr[MAX_SIZE];

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, C;
  cin >> N >> C;

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  sort(arr, arr + N);

  int left = 1, right = arr[N - 1];
  int result = 0;

  while(left <= right){
    int middle = (left + right) / 2;
    int count = 1;
    int start = arr[0];

    for(int i = 1; i < N; i++){
      if(arr[i] - start >= middle){
        count ++;
        start = arr[i];
      }
    }

    if(count >= C){
      result = middle;
      left = middle + 1;
    }
    else right = middle - 1;
  }

  cout << result << '\n';

  return 0;
}
