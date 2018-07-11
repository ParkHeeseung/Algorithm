#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time{
  int start, end;
};

int cmp(const Time &a, const Time &b);


int main() {
  int N, last = -1;
  int count = 0;

  vector <Time> v;

  cin >> N;

  for(int i = 0; i < N; i++){

    Time T;
    int start, end;
    cin >> start >> end;
    T.start = start;
    T.end = end;
    v.push_back(T);
  }

  sort(v.begin(),v.end(), cmp);

  for(int i = 0; i < N; i++){
    if(v[i].start >= last){
      last = v[i].end;
      count++;
    }
  }

  cout << count << endl;

  return 0;
}

int cmp(const Time &a, const Time &b){
  if(a.end == b.end){
    return a.start < b.start;
  }
    return a.end < b.end;
}
