#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(){

    string input;
    cin >> input;

    stack <char> s;

    int len = input.length();
    int result = 0;
    int mul = 1;

    for(int i = 0; i < len; i++){
      if(input.at(i) == '('){
        mul *= 2;
        s.push('(');

        if(i - 1 < len && input.at(i+1) == ')') {
          result += mul;
        }
        else if(i - 1 < len && input.at(i+1) == ']'){
          result = 0;
        }

      }
      else if(input.at(i) == '['){
        mul *= 3;
        s.push('[');

          if (i - 1 < len && input.at(i + 1) == ']'){
            result += mul;
          }
          else if(i - 1 < len && input.at(i+1) == ']'){
            result = 0;
          }
      }
      else if(!s.empty() && input.at(i) == ')' && s.top() == '('){
        mul /= 2;
        s.pop();
      }
      else if(!s.empty() && input.at(i) == ']' && s.top() == '['){
        mul /= 3;
        s.pop();
      }
      else{
        result = 0;
        break;
      }
    }

    if(result == 0 || !s.empty()){
      result = 0;
      cout << result << endl;
    }
    else{
      cout << result << endl;
    }
}
