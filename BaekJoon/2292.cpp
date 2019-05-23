#include <iostream>

using namespace std;

int main(){

  long long int N;
  cin >> N;

  long long int start = 1;
  long long int result = 1;
  long long int end = 1;

  while(1){
    if(N <= end) break;
    start = 6 * result ++;
    end += start;
  }

  cout << result << endl;

  return 0;

}
