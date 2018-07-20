#include <iostream>

using namespace std;

const int MAX_SIZE = 9;

int sdoku[MAX_SIZE][MAX_SIZE] = { 0, };
int markRow[MAX_SIZE][MAX_SIZE + 1] = { 0, };
int markCol[MAX_SIZE][MAX_SIZE + 1] = { 0, };
int markCell[MAX_SIZE][MAX_SIZE + 1] = { 0, };

void SDOKU();

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  for(int i = 0; i < MAX_SIZE; i++){
    for(int j = 0; j < MAX_SIZE; j++){
      int num;
      cin >> num;
      sdoku[i][j] = num;

      markRow[i][num] = 1;
      markCol[j][num] = 1;
      markCell[3 * (i / 3) + (j / 3)][num] = 1;
    }
  }

  SDOKU();


  return 0;
}

void SDOKU(){

  int r = -1, c = -1;
  for(int i = 0; i < MAX_SIZE; i++){
    for(int j = 0; j < MAX_SIZE; j++){
      if(sdoku[i][j] == 0){
        r = i;
        c = j;
        break;
      }
    }
    if (r != -1) break;
  }


  if (r == -1) {
    for(int i = 0; i < 9; i++){
      for (int j = 0; j < 9; j++){
        cout << sdoku[i][j] << " ";
      }
      cout << endl;
    }
  }

  for(int i = 1; i <= MAX_SIZE; i++){
    if(!markRow[r][i] && !markCol[c][i] && !markCell[3 * (r / 3) + (c / 3)][i]){
      markRow[r][i] = markCol[c][i] = markCell[3 * (r / 3) + (c / 3)][i] = 1;
      sdoku[r][c] = i;
      SDOKU();
      sdoku[r][c] = 0;
      markRow[r][i] = markCol[c][i] = markCell[3 * (r / 3) + (c / 3)][i] = 0;
    }
  }
}
