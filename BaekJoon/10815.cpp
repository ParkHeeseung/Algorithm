#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 500001;
int card[MAX_SIZE];
int serch[MAX_SIZE];

bool binarySearch(int left, int right, int num);

int main(){

  int N, M;

  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> card[i];
  }

  cin >> M;

  for(int i = 0; i < M; i++){
    cin >> serch[i];
  }

  sort(card, card + N);

  for(int i = 0; i < M; i++){
    int num = serch[i];
    int left = 0, right = N - 1;
    int mid;

    if(binarySearch(left, right, num)){
      cout << 1 << " ";
    }
    else
      cout << 0 << " ";

  }

  return 0;
}

bool binarySearch(int left, int right, int num){
  int mid = (left + right) / 2;
  bool result;
  if (left > right)
    return false;
  else {
    if (card[mid] > num){
      result = binarySearch(left, mid - 1, num);
    }
    else if (card[mid] < num){
      result = binarySearch(mid + 1, right, num);
    }
    else{
      return true;

    }

    return result;
  }
}
