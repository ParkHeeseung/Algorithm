#include <iostream>

using namespace std;

const int MAX_SIZE = 1001;

int arr[MAX_SIZE];

int sol(int N);

int main(){

  int C;
  cin >> C;

  for(int i = 0; i < C; i++){
    int N;
    cin >> N;
    for(int j = 0; j < N; j++){
      cin >> arr[j];
    }

    sol(N);
  }
}

int sol(int N){

  int sum = 0;
  int avg;
  int count = 0;
  for(int i = 0; i < N; i++){
    sum += arr[i];
  }
  avg = sum / N;

  for(int i = 0; i < N; i++){
    if(avg < arr[i]) count ++;
  }
  cout << fixed;
  cout.precision(3);
  cout << (float) count / N * 100 << "%" << endl;

}
