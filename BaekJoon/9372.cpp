#include <iostream>

using namespace std;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(0);

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases--){

    int N, M;
    cin >> N >> M;


    for(int i = 0; i < M; i++){
      int num1, num2;
      cin >> num1 >> num2;
    }

    cout << N-1 << endl;

  }


  return 0;
}
