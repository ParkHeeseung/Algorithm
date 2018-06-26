#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

void Parenthesis_String(string str);

int main(){

  int numTestCases;
  cin >> numTestCases;

  for(int i = 0; i < numTestCases; i++){
    string str;
    cin >> str;
    Parenthesis_String(str);

  }

  return 0;
}


void Parenthesis_String(string str){

  stack <char> st;
  bool error = false;

  for(int i = 0; i < str.length(); i++){
    if(str.at(i) == '(') st.push('(');
    else if(str.at(i) == ')' && !st.empty() && st.top() == '(') st.pop();
    else {
      error = true;
      break;
    }
  }

  if(!error && st.empty()) cout << "YES" << endl;
  else cout << "NO" << endl;

}
