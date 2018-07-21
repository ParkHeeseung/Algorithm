#include <iostream>

using namespace std;

int arr[] = {2, 3, 5, 7};

int DFS(int r, int n);
bool isPrime(int num);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;

  cin >> N;

  for(int i = 0; i < 4; i++){
    DFS(arr[i], N - 1);

  }

  return 0;

}

int DFS(int r, int n){
  if(n == 0) cout << r << endl;

  for(int i = 1; i < 10; i+=2){
    int num = r * 10 + i;
    if(isPrime(num)){
      DFS(num, n - 1);
    }
  }
}

bool isPrime(int num){

  for(int i = 2; i * i <= num; i++){
    if(num % i == 0)return false;
  }

  return true;

}
