#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_SIZE = 52;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  char Arr[MAX_SIZE];
  int front = 0, result = 0, num, size = 0;
  bool check = false;

  cin >> Arr;

  for(int i = 0; Arr[i] != '\0'; i++){
    char numArr[6] = { 0, };

    if(Arr[i] == '+' || Arr[i] == '-'){
      for(int j = front, index = 0; j < i; j++, index++){
        numArr[index] = Arr[j];
      }

      front = i + 1;

      num = atoi(numArr);


      if(Arr[i] == '-' && !check){
        result += num;
        check = true;
      }
      else if(!check){
        result += num;
      }
      else{
        result -= num;
      }
    }

    size++;
  }

  char numArr[5] = { 0, };

  for(int i = front, index = 0; i < size; i++, index++){
    numArr[index] = Arr[i];

  }

  num = atoi(numArr);

  if(!check) result += num;
  else result -= num;

  cout << result << '\n';

  return 0;

}
