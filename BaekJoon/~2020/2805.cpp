#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAX_SIZE = 1000000;

bool Binary_Search(int left, int right, int size, int num, int Arr[]);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int Arr[MAX_SIZE];
  int high;


  int N, M;
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    cin >> Arr[i];
  }

  sort(Arr, Arr + N);

  Binary_Search(0, Arr[N-1], N, M, Arr);


}


bool Binary_Search(int left, int right, int size, int num, int Arr[]){

  long long sum = 0;

  long long mid = (left + right) / 2;

  for(int i = 0; i < size; i++){
    if((Arr[i] - mid) > 0) {
      sum += Arr[i] - mid;
    }
  }

  if(right < left){
    return false;
  }

    if(sum < num){
      if(!Binary_Search(left, mid - 1, size, num, Arr)){
        cout << mid - 1 << endl;
        return true;
      }
    }
    else if(sum > num){
      if(!Binary_Search(mid + 1, right, size, num, Arr)){
        cout << mid << endl;
        return true;
      }
    }
    else{
      cout << mid << endl;
      return true;
    }
}
