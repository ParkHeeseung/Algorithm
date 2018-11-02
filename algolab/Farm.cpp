#include <iostream>

using namespace std;

int main(){

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases--){

    int a, b, n, w;
    cin >> a >> b >> n >> w;

    int count = 0;
    int result;

    for(int i = 1; i < n; i++){
      if(a * i + b * (n - i) == w) {
        count++;
        result = i;
      }
    }

    if(count == 1){
      cout << result << " " << n - result << endl;
    }
    else{
      cout << -1 << endl;
    }

  }

  return 0;

}
