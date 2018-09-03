#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 20;

void Func(int n);

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  while(numTestCases --){
    int input;
    inStream >> input;
    Func(input);

  }

  return 0;
}

void Func(int n){

  int arr[20], j, check = 0;

  for(int i = 2; i <= 64; i++){
    int count = 0;
    for (j = n; j ; j /= i) arr[count++] = j % i;
    for (j = 0; j < count; j++) if (arr[j] ^ arr[count - 1 - j]) break;
    if (j == count){
      check = 1;
      break;
    }


  }

  cout << check << '\n';

}
