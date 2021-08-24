#include <iostream>

using namespace std;

int main(){

  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases --){

    int n, m;
    cin >> n >> m;

    int num1 = 1, num2 = 1;
    int result = 0;

    do{
      int temp = num1;
      num1 = num2;
      num2 = (temp + num2) % m;
      result++;
    } while (num1 != 1 || num2 != 1);

    cout << n << " " << result << endl;

  }


  return 0;
}
