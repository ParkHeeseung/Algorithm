#include <iostream>

using namespace std;

const int MAX_SIZE = 10001;

bool arr[MAX_SIZE];

int func(int n){

  int sum = n;

  while(1){
    if(n == 0)break;

    sum += n % 10;
    n = n / 10;
  }

  return sum;

}


int main(){

  for(int i = 1; i < MAX_SIZE; i++){
    int idx = func(i);

    if(idx <= MAX_SIZE){
      arr[idx] = 1;
    }
  }

  for(int i = 1; i < MAX_SIZE; i++){
    if(!arr[i]) cout << i << endl;
  }

  return 0;
}
