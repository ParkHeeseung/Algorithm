#include <iostream>
#include <cstring>

using namespace std;

int main(){

  string str;
  cin >> str;

  int N;
  cin >> N;

  int strSize = str.size();
  int pointer = str.size();

  for(int i = 0; i < N; i++){
    string cmd;
    cin >> cmd;

    if(cmd == "L" && pointer != 0){
      pointer --;
    }
    else if(cmd == "D" && pointer != strSize){
      pointer ++;
    }
    else if(cmd == "B" && pointer != 0){
      str.erase(pointer - 1, 1);
      strSize--;
      pointer--;
    }
    else if(cmd == "P"){
      cin >> cmd;
      str.insert(pointer, cmd);
      strSize++;
      pointer++;
    }
  }

  cout << str << endl;

  return 0;

}
