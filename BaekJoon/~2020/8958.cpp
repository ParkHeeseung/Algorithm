#include <iostream>
#include <string>

using namespace std;

int main(){

  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    string str;
    cin >> str;
    int count = 0;

    int dp[str.size()];
    if(str.at(0) == 'O') dp[0] = 1;
    else dp[0] = 0;
    for(int j = 1; j < str.size(); j++){
      if(str.at(j) == 'O'){
        dp[j] = dp[j - 1] + 1;
      }
      else{
        dp[j] = 0;
      }
    }

    for(int j = 0; j < str.size(); j++){
      count += dp[j];
    }

    cout << count << endl;
  }

  return 0;
}
