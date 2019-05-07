#include <iostream>

using namespace std;

const int MAX_SIZE = 51;

int main(){


  int arr[MAX_SIZE];

  int N;
  cin >> N;

  int Min = 10000001;
  int Max = -1;
  for(int i = 0 ; i < N; i++){
    int num;
    cin >> num;
    if(num > Max) Max = num;
    if(num < Min) Min = num;
  }

  cout << Max * Min << endl;

  return 0;
}
