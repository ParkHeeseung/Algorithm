#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const int MAX_SIZE = 1000;

vector <int> vec;

int Eureka(int n);

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  for (int i = 1; i * (i + 1) / 2 <= MAX_SIZE; i++) vec.push_back(i * (i + 1) / 2);

  while(numTestCases --){

    int input;
    inStream >> input;
    cout << Eureka(input) << endl;

  }
}

int Eureka(int n){

  for(int i = 0; i < vec.size(); i++){
    for(int j = 0; j < vec.size(); j++){
      for(int k = 0; k < vec.size(); k++){
        if((vec.at(i) + vec.at(j) + vec.at(k)) == n) return 1;
      }
    }
  }

  return 0;
}
