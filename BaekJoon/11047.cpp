#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int arr[MAX_SIZE];

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;


  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  int money = 0;
  int index = N - 1;
  int result = 0;

  while (money != K){

    if(money + arr[index] <= K){
      money = money + arr[index];
      result ++;
    }
    else{
      index--;
    }

  }
  cout << result << endl;


  return 0;

}
