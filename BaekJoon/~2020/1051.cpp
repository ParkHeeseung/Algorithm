#include <iostream>
#include <stdio.h>
#include <memory.h>


using namespace std;

const int MAX_SIZE = 200;

int arr[MAX_SIZE][MAX_SIZE];


int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  memset(arr, -1, sizeof(arr));


  int N, M, result = 1;
  cin >> N >> M;

  for(int i = 0; i < N; i++)
    for(int j = 0; j < M; j++)
      scanf("%1d", &arr[i][j]);

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      for(int k = (N < M ? N : M); k > 0; k--){
        if(arr[i][j] == arr[i][j + k-1] && arr[i][j + k-1] == arr[i + k-1][j] && arr[i][j] == arr[i + k-1][j + k-1]){
          if(result < k * k){
            result = k * k;
            break;
          }
        }
      }
    }
  }

  cout << result;


  return 0;

}
