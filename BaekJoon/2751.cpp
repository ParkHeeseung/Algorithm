#include <iostream>

using namespace std;

const int MAX_SIZE = 10001;

int count[MAX_SIZE] = { 0, };

int main(){

  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    count[num] ++;
  }

  for(int i = 1; i < MAX_SIZE; ){
    if(count[i]-- == 0){
      i++;
      continue;
    }
    cout << i << '\n';
  }

  return 0;

}
