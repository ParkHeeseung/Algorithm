#include <iostream>

using namespace std;

void goldBach(int n);
bool Prime(int n);

int main(){

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases --){

    int input;
    cin >> input;
    goldBach(input);

  }
}

void goldBach(int n){

  int mid = n >> 1;
  for(int i = mid, j = mid;  i <= n; i--, j++){
    if(Prime(i) && Prime(j)){
      cout << i << " " << j << endl;
      return;
    }
  }
}

bool Prime(int n)
{

  for(int i = 2; i <= n/2; ++i)
  {
      if(n % i == 0)
      {
        return false;
      }
  }
  return true;
}
