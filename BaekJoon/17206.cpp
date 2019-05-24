#include <iostream>

using namespace std;

const int MAX_SIZE = 80001;

int arr[MAX_SIZE] = { 0, };

void func();

int main(){

  ios::sync_with_stdio(false);
  cin.tie(0);

  int T;
  cin >> T;

  func();

  for(int i = 0; i < T; i++){
    int N;
    cin >> N;
    cout << arr[N] << "\n";
  }



  return 0;
}

void func(){
  for(int i = 1; i < MAX_SIZE; i++){
    if(i % 3 == 0){
      arr[i] = arr[i-1] + i;
    }
    else if(i % 7 == 0) {
      arr[i] = arr[i-1] + i;
    }
    else{
      arr[i] = arr[i-1];
    }
  }
}
