#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 10001;
int arr[MAX_SIZE];
long long int Func(int n);

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  while(numTestCases --){
    int n;
    inStream >> n;
    for(int i = 0; i < n; i++){
      inStream >> arr[i];
    }
    cout << Func(n) << "\n";

  }

  return 0;
}

long long int Func(int n){

  long long int max, result[6];
  sort(arr, arr+n);

  result[0] = arr[0] * arr[1];
  result[1] = arr[0] * arr[1] * arr[2];
  result[2] = arr[0] * arr[1] * arr[n - 1];
  result[3] = arr[n - 2] * arr[n - 1];
  result[4] = arr[n - 3] * arr[n - 2] * arr[n - 1];
  result[5] = arr[n - 2] * arr[n - 1] * arr[0];

  sort(result, result + 6);

  return result[5];

}
