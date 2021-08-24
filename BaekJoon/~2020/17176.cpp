#include <iostream>
#include <stdio.h>


using namespace std;

const int MAX_SIZE = 100001;

int main(){

  int N;
  cin >> N;
  int arr[53] = { 0, };
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    arr[num]++;
  }


  string _str;
  getline (cin, _str);

  for(int i = 0; i < N; i++){
    char input;
    scanf("%c", &input);
    if(input == ' ' && arr[0] != 0){
      arr[0]--;
    }
    else if(input >= 'A' && input <= 'Z' && arr[input - 64] != 0){
      arr[input - 64]--;
    }
    else if(input >= 'a' && input <= 'z' && arr[input - 70] != 0){
      arr[input - 70]--;
    }
    else{
      cout << "n" << endl;
      return 0;
    }
  }

  cout << "y" << endl;

  return 0;
}
