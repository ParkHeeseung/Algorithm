#include <iostream>
#include <string>

const int MAX_SIZE = 26;

using namespace std;

int main(){

  int N;
  cin >> N;

  int result = 0;

  for(int i = 0; i < N; i++){
    int count[MAX_SIZE] = { 0, };
    bool check = false;
    string str;
    cin >> str;
    char start;
    for(int j = 0; j < str.size(); j++){
      if(count[str.at(j) - 97] == 0){
        count[str.at(j) - 97]++;
        start = str.at(j);
      }
      else if(start == str.at(j)){}
      else{
        check = true;
        break;
      }
    }

    if(!check) result ++;

  }

  cout << result << endl;

  return 0;
}
