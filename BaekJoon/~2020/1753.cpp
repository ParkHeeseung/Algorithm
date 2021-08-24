#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;


const int MAX_SIZE = 20001;
const int INF = 8765432;

typedef pair<int,int> point;

vector <point> way[MAX_SIZE];


int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int V, E, K;
  cin >> V >> E >> K;

  for(int i = 0; i < E; i++){
    int u, v, w;
    cin >> u >> v >> w;
    way[u].push_back(make_pair(v,w));
  }

  vector<int> dist(V+1,INF);

  dist[K] = 0;

  priority_queue<point> pq;
  pq.push(make_pair(K,0));

  while(!pq.empty()){
    int here = pq.top().first;
    int cost = pq.top().second;
    pq.pop();

    for(int i = 0; i < way[here].size(); i++){
      int nhere = way[here][i].first;
      int ncost = cost + way[here][i].second;
      if(ncost < dist[nhere]){
        dist[nhere] = ncost;
        pq.push(make_pair(nhere,ncost));
      }
    }
  }

  for(int i = 1; i < V + 1; i++){
    if(dist[i] == INF){
      cout << "INF" << endl;
    }
    else{
      cout << dist[i] << endl;
    }
  }
}
