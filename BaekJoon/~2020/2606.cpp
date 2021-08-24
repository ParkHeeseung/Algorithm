#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int BFS(int x);

int way[101];
vector <int> a[101];
queue <int> q;

int main(){

  int n, e;
  cin >> n >> e;

  for(int i = 0; i < e; i++){
    int u, v;
    cin >> u >> v;
    a[u].push_back(v);
    a[v].push_back(u);
  }

    cout <<  BFS(1) << "\n";
}

int BFS(int x){

  int result = 0;
  q.push(x);
  way[x] = 1;

  while(!q.empty()){
    int x = q.front();
    q.pop();

    for(int i = 0; i < a[x].size(); i++){
      int y = a[x][i];
      if(way[y] == 0){
        q.push(y);
        way[y] = 1;
        result++;
      }
    }
  }

  return result;
}
