#include<iostream>

using namespace std;

const int BIG = 5;
const int SMALL = 3;

int func(int n);

int main(void){

  int n;
  cin >> n;

  cout << func(n) << endl;

  return 0;
}

int func(int n){

  if(n < SMALL) return -1;
  int bigMax = n / BIG;
  while(bigMax >= 0){
    int tmp = n - (BIG * bigMax);
    if(tmp % SMALL ==0){
      return bigMax + (tmp/SMALL);
    }
    bigMax--;
  }

  return -1;
}
