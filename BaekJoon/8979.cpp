#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 1001;

int N, K;

pair< pair<int, int>, pair<int, int> > medal[MAX_SIZE];

bool cmp(pair< pair<int, int>, pair<int, int> > a, pair<pair<int, int>, pair<int, int> > b);
int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  cin >> N >> K;

  for (int i = 0; i < N; i++)
    cin >> medal[i].first.first >> medal[i].first.second >> medal[i].second.first >> medal[i].second.second;

  sort(medal, medal + N, cmp);

  for (int i = 0; i < N; i++){
    if (medal[i].first.first == K){
      cout << i + 1;
      break;

    }
  }

  return 0;
}

bool cmp(pair< pair<int, int>, pair<int, int> > a, pair< pair<int, int>, pair<int, int> > b){

  if (a.first.second > b.first.second) return true;
  else if (a.first.second == b.first.second){
    if (a.second.first > b.second.first) return true;
      else if (a.second.first == b.second.first)
        if (a.second.second > b.second.second) return true;
        else if(a.first.first == K) return true;
  }

  return false;

}
