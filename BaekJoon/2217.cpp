#include <iostream>
#include <algorithm>

const int MAX_SIZE = 100000;

using namespace std;;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int numTestCases, result = 0;
  cin >> numTestCases;

  int arr[MAX_SIZE] = { 0, };

  for(int i = 0; i < numTestCases; i++){
    cin >> arr[i];
  }

  sort(arr, arr + numTestCases);

  for(int i = 0; i < numTestCases; i++){
    int temp = arr[i] * (numTestCases - i);
    if(result < temp){
      result = temp;
    }
  }

  cout << result << '\n';


  return 0;

}
