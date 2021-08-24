#include <iostream>

using namespace std;

int main(){

  int T;
  cin >> T;

  for(int i = 0; i < T; i++){
    int R;
    cin >> R;
    string str;
    cin >> str;

    for(int j = 0; j < str.size(); j++){
      for(int k = 0; k < R; k++){
        cout << str.at(j);
      }
    }
    cout << "\n";
  }


  return 0;

}
