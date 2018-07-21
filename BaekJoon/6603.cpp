#include <iostream>

using namespace std;

const int MAX_SIZE = 13;

int arr[MAX_SIZE];
int result[MAX_SIZE];

void dfs(int r, int c, int k);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int k;

  while(cin >> k && k){
    for(int i = 0; i < k; i++) {
      cin >> arr[i];
    }
      dfs(0, 0, k);
      cout << '\n';
  }

}

void dfs(int r, int c, int k){

  if(c == 6) {
    for(int i = 0; i < 6; i++){
      cout << result[i] << ' ';
    }
    cout << '\n';
    return;
  }

  for(int i = r; i < k; i++){
    result[c] = arr[i];
    dfs(i + 1, c + 1, k);
  }

}
