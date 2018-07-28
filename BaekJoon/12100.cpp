#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 21;

int arr[MAX_SIZE][MAX_SIZE];
int N, result;

void left(int copyArr[][MAX_SIZE]);
void right(int copyArr[][MAX_SIZE]);
void up(int copyArr[][MAX_SIZE]);
void down(int copyArr[][MAX_SIZE]);
void dfs(int arr[][MAX_SIZE], int dir, int depth);
void copyArray(int a[][MAX_SIZE], int b[][MAX_SIZE]);
int getResult(int arr[][MAX_SIZE]);
void printArr(int a[][MAX_SIZE]);


int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> arr[i][j];
    }
  }

  for(int i = 0; i < 4; i++){
    dfs(arr, i, 0);
  }

  cout << result << '\n';


  return 0;
}

void left(int copyArr[][MAX_SIZE]){

  int result[MAX_SIZE][MAX_SIZE] = { 0, };

  for(int i = 0; i < N; i++){
    vector <int> vec;
    int temp;

    for(int j = 0; j < N; j++){
      if(copyArr[i][j] != 0) vec.push_back(copyArr[i][j]);
    }

    for(int j = 0, index = 0; j < vec.size(); j++){

      temp = vec.at(j);

      if(j + 1 < vec.size() && temp == vec.at(j + 1)){
        result[i][index] = temp * 2;
        index ++;
        j++;
      }
      else {
        result[i][index] = temp;
        index ++;
      }
    }

  }

  copyArray(copyArr, result);

}

void right(int copyArr[][MAX_SIZE]){

  int result[MAX_SIZE][MAX_SIZE] = { 0, };

  for(int i = 0; i < N; i++){
    vector <int> vec;
    int temp;

    for(int j = N - 1; j >= 0; j--){
      if(copyArr[i][j] != 0) vec.push_back(copyArr[i][j]);
    }

    for(int j = 0, index = N - 1; j < vec.size(); j++){

      temp = vec.at(j);

      if(j + 1 < vec.size() && temp == vec.at(j + 1)){
        result[i][index] = temp * 2;
        index --;
        j++;
      }
      else {
        result[i][index] = temp;
        index --;
      }
    }

  }

  copyArray(copyArr, result);


}

void up(int copyArr[][MAX_SIZE]){

  int result[MAX_SIZE][MAX_SIZE] = { 0, };


  for(int i = 0; i < N; i++){
    vector <int> vec;
    int temp;

    for(int j = 0; j < N; j++){
      if(copyArr[j][i] != 0) vec.push_back(copyArr[j][i]);
    }

    for(int j = 0, index = 0; j < vec.size(); j++){

      temp = vec.at(j);

      if(j + 1 < vec.size() && temp == vec.at(j + 1)){
        result[index][i] = temp * 2;
        index ++;
        j++;
      }
      else {
        result[index][i] = temp;
        index ++;
      }
    }

  }

  copyArray(copyArr, result);


}

void down(int copyArr[][MAX_SIZE]){

  int result[MAX_SIZE][MAX_SIZE] = { 0, };


  for(int i = 0; i < N; i++){
    vector <int> vec;
    int temp;

    for(int j = N - 1; j >= 0; j--){
      if(copyArr[j][i] != 0) vec.push_back(copyArr[j][i]);
    }

    for(int j = 0, index = N - 1; j < vec.size(); j++){

      temp = vec.at(j);

      if(j + 1 < vec.size() && temp == vec.at(j + 1)){
        result[index][i] = temp * 2;
        index --;
        j++;
      }
      else {
        result[index][i] = temp;
        index --;
      }
    }

  }

  copyArray(copyArr, result);

}

void dfs(int arr[][MAX_SIZE], int dir, int depth){

  if(depth == 5){
    int temp = getResult(arr);
    if(result < temp) result = temp;
    return;
  }

  int copyArr[MAX_SIZE][MAX_SIZE];

  copyArray(copyArr, arr);

  switch (dir) {
    case 0:
      right(copyArr);
    break;
    case 1:
      left(copyArr);
    break;
    case 2:
      up(copyArr);
    break;
    case 3:
      down(copyArr);
    break;
  }

  for(int i = 0; i < 4; i++){
    dfs(copyArr, i, depth + 1);
  }

}

void copyArray(int a[][MAX_SIZE], int b[][MAX_SIZE]){

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      a[i][j] = b[i][j];
    }
  }
}

int getResult(int arr[][MAX_SIZE]){
  int ans = 0;

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(ans < arr[i][j]) ans = arr[i][j];
    }
  }

  return ans;
}

void printArr(int a[][MAX_SIZE]){

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }
  cout << '\n';

}
