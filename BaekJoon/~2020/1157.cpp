#include <iostream>
#include <string>

const int MAX_SIZE = 26;

using namespace std;

int main(){

  string str;
  cin >> str;

  int count[MAX_SIZE] = { 0, };

  for(int i = 0; i < str.size(); i++){
    int charN = str.at(i);

    if(charN < 91) count[charN - 65]++;
    else count[charN - 97]++;
  }

  int index;
  int maxCount = -1;

  for(int i = 0; i < MAX_SIZE; i++){
    if(maxCount < count[i]){
      maxCount = count[i];
      index = i;
    }
  }

  for(int i = 0; i < MAX_SIZE; i++){
    if (i == index) continue;
    if(maxCount == count[i]){
      cout << "?" << endl;
      return 0;
    }
  }

  char result = index;
  result += 65;
  cout << result << endl;

  return 0;
}
