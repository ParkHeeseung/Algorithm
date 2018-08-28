#include <iostream>
#include <fstream>

using namespace std;

int allSum(int a, int b);

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  for(int i = 0; i < numTestCases; i++){
    int a, b;
    inStream >> a >> b;
    cout << allSum(a, b) << '\n';
  }


  return 0;
}

int allSum(int a, int b){

  int result = 0;

  for(int i = a; i <= b; i++){
    result += i;
  }

  return result;

}
