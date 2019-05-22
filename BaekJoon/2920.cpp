#include <iostream>

using namespace std;

const int MAX_SIZE = 8;

int main(){

  int arr[MAX_SIZE];

  for(int i = 0; i < MAX_SIZE; i++){
    cin >> arr[i];
  }

  switch (arr[0]) {
    case 1:
      for(int i = 1; i < MAX_SIZE; i++){
        if(arr[i] == i) continue;
        else {
          cout << "mixed" << endl;
          return 0;
        }
        cout << "ascending" << endl;
        return 0;
      }
    case 8:
      for(int i = MAX_SIZE - 1; i >= 0; i--){
        if(arr[i] == i) continue;
        else {
          cout << "mixed" << endl;
          return 0;
        }
        cout << "descending" << endl;
        return 0;
      }
    default : cout << "mixed" << endl;

  }



  return 0;
}
