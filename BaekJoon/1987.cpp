#include <iostream>
#include <stack>
#include <vector>

using namespace std;

const int _x[] = {0, 0, -1, 1};
const int _y[] = {-1, 1, 0, 0};
const int MAX_SIZE = 21;

void DFS(int x, int y, int R, int C, char arr[][MAX_SIZE]);

vector <char> vec;

int result = -1;
int count = 0;


int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  char arr[MAX_SIZE][MAX_SIZE];
  bool visit[MAX_SIZE][MAX_SIZE];

  int R, C;
  cin >> R >> C;

  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      cin >> arr[i][j];
    }
  }

  DFS(0, 0, R, C, arr);

  cout << result << endl;


  return 0;
}

void DFS(int x, int y, int R, int C, char arr[][MAX_SIZE]){
  if(x < 0 || y < 0) return;
  if(x == R || y == C) return;

  for(int i = 0; i < vec.size(); i++){
    if(vec[i] == arr[x][y]){
      if(count > result){
        result = count;
      }
      return;
    }
  }
  count ++;
  vec.push_back(arr[x][y]);
  for(int i = 0; i < 4; i++){
    DFS(x + _x[i], y + + _y[i], R, C, arr);

  }
  count --;
  vec.pop_back();

}
