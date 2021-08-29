#include <iostream>
#include <vector>

using namespace std;

void happyNumber(int N, vector<int> vec);

int main(){


  int numTestCases;
  cin >> numTestCases;

  while(numTestCases--){

    vector <int> vec;

    int N;
    cin >> N;
    happyNumber(N, vec);

  }

  return 0;

}


void happyNumber(int N, vector<int> vec){


  if (N == 1){
    cout << "HAPPY" << endl;
    return;
  }



  for(int i = 0; i < vec.size(); i++){
    if (N == vec[i]){
      cout << "UNHAPPY" << endl;
    return;
    }
  }

  vec.push_back(N);

  int copy = N;
  int result = 0;

  while (copy){

    result += (copy % 10)*(copy % 10);
    copy /= 10;

  }

  happyNumber(result, vec);

}
