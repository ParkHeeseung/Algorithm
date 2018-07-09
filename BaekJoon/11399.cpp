#include <iostream>
#include <algorithm>

const int MAX_SIZE = 1000;

using namespace std;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int numTestCases;
  long long int result = 0;
  cin >> numTestCases;

  int arr[MAX_SIZE] = { 0, };

  for(int i = 0; i < numTestCases; i++){
    cin >> arr[i];
  }

  sort(arr, arr + numTestCases);


  for(int i = 0; i < numTestCases; i++){


    for(int j = 0; j <= i; j++) result += arr[j];

  }

  cout << result << endl;

  return 0;
}
