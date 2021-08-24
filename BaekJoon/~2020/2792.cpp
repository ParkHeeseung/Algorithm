#include <iostream>

using namespace std;

#define INF 987654321;

const int MAX_SIZE = 300001;

int arr[MAX_SIZE];

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;

  cin >> N >> M;

  for(int i = 0; i < M; i++){
    cin >> arr[i];
  }

  int left = 0, right = INF;

  while(left < right){
    int middle = (left + right) / 2;
    int sum = 0;
    for(int i = 0; i < M; i++){
        sum += (arr[i] - 1) / middle + 1;
    }
    if(sum <= N) right = middle;
    else left = middle + 1;

  }

  cout << left;

  return 0;
}
