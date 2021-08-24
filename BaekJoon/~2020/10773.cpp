#include <iostream>
#include <stack>

using namespace std;

int main() {

  int K;
  cin >> K;

  stack <int> s;
  for(int i = 0; i < K; i++){
    int money;
    cin >> money;
    if(money){
      s.push(money);
    }
    else {
      s.pop();
    }
  }

  int result = 0;

  while (!s.empty()){
    result += s.top();
    s.pop();
  }

  cout << result << endl;

  return 0;
}