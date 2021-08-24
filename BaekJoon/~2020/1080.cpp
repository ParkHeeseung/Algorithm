#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){

  int N, M, result = 0;
  cin >> N >> M;

  vector <string> A;
  vector <string> B;

  for(int i = 0; i < N; i++){
    string input;
    cin >> input;
    A.push_back(input);
  }

  for(int i = 0; i < N; i++){
    string input;
    cin >> input;
    B.push_back(input);
  }

  for(int i = 0; i < N; i++){
    string tempA = A.at(i);
    string tempB = B.at(i);
    for(int j = 0; j < M; j++){
      result += tempA.at(j) != tempB.at(j);
    }
  }

  cout << result << endl;


  return 0;
}
