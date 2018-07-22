#include<iostream>

using namespace std;

#define MAX 99999999

const int MAX_SIZE = 1001;
int network[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE];

int prim(int N);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  cin >> N >> M;

  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N; j++){
      network[i][j] = MAX;
      if (i == j) network[i][j] = 0;
    }
  }

  for(int i = 0; i < M; i++){
    int a, b, c;
    cin >> a >> b >> c;
    network[a][b] = network[b][a] = c;
  }

  cout << prim(N) << '\n';

  return 0;

}

int prim(int N){

  int min, idx, sum = 0;

  for(int i = 1; i <= N; i++) dist[i] = network[1][i];

  dist[1] = -1;

  for(int i = 1; i < N; i++){
    min = MAX;
    for (int j = 1; j <= N; j++){
      if(dist[j] != -1 && dist[j] < min){
        min = dist[j];
        idx = j;
      }
    }
    sum += min;
    dist[idx] = -1;

    for(int j = 1; j <= N; j++){
      if(dist[j] > network[idx][j]) dist[j] = network[idx][j];
    }
  }
    return sum;
}
