#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void Func(int a, int b);
int gcd(int a,int b);

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  while(numTestCases --){

    int a, b;
    inStream >> a >> b;
    Func(a, b);

  }

  return 0;
}

void Func(int a, int b){

  int x;

  while(a != 1){

    if(b % a == 0){
      x = b / a;
    }
    else{
      x = b / a + 1;
    }

    a = a * x - b;
    b *= x;

    int g = gcd(a, b);
    a /= g;
    b /= g;
  }

  cout << b << endl;

}

int gcd(int a,int b)
{
    if( a % b == 0 )
        return b;
    else
        return gcd(b, a % b);
}
