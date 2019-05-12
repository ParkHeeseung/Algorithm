#include <iostream>
#include <string>
#include <cstdio>
#include <stack>

using namespace std;

int main(){

  string str;
  cin >> str;

  int N;
  cin >> N;

  stack <char> s1,s2;

  for(int i = 0; i < str.size(); i++){
    s1.push(str.at(i));
  }

  for(int i = 0; i < N; i++){

    char cmd;
    scanf("%s", &cmd);

    if(cmd == 'L'){
      if(!(s1.empty())){
        s2.push(s1.top());
        s1.pop();
      }
    }
    else if(cmd == 'D'){
      if(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
      }
    }
    else if(cmd == 'B'){
      if(!(s1.empty())){
        s1.pop();
      }
    }
    else if(cmd == 'P'){
      scanf("%s", &cmd);
      s1.push(cmd);
      }
    }

    while(!(s1.empty())){
        s2.push(s1.top());
        s1.pop();
    }
    while(!(s2.empty())){
        cout << s2.top();
        s2.pop();
    }
    cout << endl;

    return 0;
}
