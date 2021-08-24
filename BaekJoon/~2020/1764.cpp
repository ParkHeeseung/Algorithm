#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {

  vector <string> v;
  vector <string> result;

  int N,M;

  cin >> N >> M;

  for(int i = 0 ; i < N + M; i++){
    string input;
    cin >> input;
    v.push_back(input);
  }

  sort(v.begin(),v.end());

  for(int i = 1 ; i < N + M ;i++){
    if(v[i].compare(v[i-1]) == 0){
      result.push_back(v[i]);
    }
  }

  cout << result.size() << endl;

  for(int i = 0; i < result.size();i++){

    cout << result[i] << endl;
  }

  return 0;
}
