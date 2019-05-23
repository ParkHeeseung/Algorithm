#include <iostream>
#include <string>

using namespace std;

int main(){

  string A, B;

  cin >> A >> B;

  string C;

  for(int i = 2; i >= 0;){
    if(A.at(i) > B.at(i)){
      C = A;
      break;
    }
    else if(A.at(i) < B.at(i)) {
      C = B;
      break;
    }
    else{
      i--;
    }
  }

  for(int i = 2; i >= 0; i--){
    cout << C.at(i);
  }
  cout << '\n';

  return 0;
}
