#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 26;

void Func(string str);

int main(){

  string str;

  cin >> str;

  Func(str);


  return 0;
}

void Func(string str){

  int index[MAX_SIZE];

  for(int i = 0; i < MAX_SIZE; i++){
    index[i] = -1;
  }

  for(int i = 0; i < str.size(); i++){

    int stringNum = str.at(i) - 97;

    if(index[stringNum] == -1){
      index[stringNum] = i;
    }

  }

  for(int i = 0; i < MAX_SIZE; i++){
    cout << index[i] << " ";
  }

  cout << endl;


}
