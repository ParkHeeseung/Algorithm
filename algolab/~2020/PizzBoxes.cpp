#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAX_SIZE = 1001;

void func(int n, int m, int arr[][MAX_SIZE]);

int main(){

  int numTestCases;
  scanf("%d", &numTestCases);

  while(numTestCases --){

    int arr[MAX_SIZE][MAX_SIZE];
    int n, m;
    scanf("%d%d\n", &n, &m);

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        scanf("%d", &arr[i][j]);
      }
    }

    func(n, m, arr);

  }

  return 0;
}

void func(int n, int m, int arr[][MAX_SIZE]) {

  int checkBox[n][m];
  int row[n];
  int col[m];
  long long int result = 0;

  for(int i = 0; i < n; i++){
    int max = -1;
    for(int j = 0; j < m; j++){
      if(max < arr[i][j]) max = arr[i][j];
    }
    row[i] = max;
  }

  for(int i = 0; i < m; i++){
    int max = -1;
    for(int j = 0; j < n; j++){
      if(max < arr[j][i]) max = arr[j][i];
    }
    col[i] = max;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(row[i] > arr[i][j] && col[j] > arr[i][j]) result += arr[i][j];
    }
  }

  cout << result << endl;
}
