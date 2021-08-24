#include <iostream>

using namespace std;

const int MAX_SIZE = 65;
const int _y[4] = {0, 0, 1, 1};
const int _x[4] = {0, 1, 0, 1};

void Cut(int y, int x, int n, char pixel[][MAX_SIZE]);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  char pixel[MAX_SIZE][MAX_SIZE];

  int size;
  cin >> size;

  for(int i = 0; i < size; i++){
    string str;
    cin >> str;

    for(int j = 0; j < size; j++){
      pixel[i][j] = str.at(j);
    }
  }


  Cut(0, 0, size, pixel);

}

void Cut(int y, int x, int n, char pixel[][MAX_SIZE]){

  char temp = pixel[y][x];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(temp != pixel[y + i][x + j]){
        cout << "(";
        for(int k = 0; k < 4; k++){
          Cut(y + _y[k] * n / 2, x + _x[k] * n / 2, n / 2, pixel);
        }
        cout << ")";
        return;
      }
    }
  }

  cout << temp;
}
