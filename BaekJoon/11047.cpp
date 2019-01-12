#include <iostream>
#include <vector>

using namespace std;

int main(){

  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;

  vector <int> vec(N);

  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    vec.push_back(num);
  }


  return 0;

}
