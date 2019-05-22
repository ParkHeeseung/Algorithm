#include <iostream>

using namespace std;

int main(){

  int N;
  cin >> N;

  int temp = N;

  int res = 0;
  do{
    if(temp < 10){
      temp = temp * 10 + temp;
    }
    else{
      int sum = temp / 10 + temp % 10;
      temp = temp % 10 * 10 + sum % 10;
    }
    res++;
  } while(temp != N);

  cout << res << endl;

  return 0;
}
