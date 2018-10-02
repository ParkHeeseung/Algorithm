#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100001;

pair <int, int> arr[MAX_SIZE];


int main(){

  int numTestCases;
  scanf("%d", &numTestCases);

  while(numTestCases --){

    int n;
    scanf("%d\n", &n);

    for(int i = 1; i <= n; i++){
      int x, y;
      scanf("%d%d\n", &arr[i].first, &arr[i].second);
    }

    sort(arr + 1, arr + 1 + n);

    int temp;
    for(int i = 1; i < n; i = temp){
      temp = upper_bound(arr + 1, arr + n + 1, make_pair(arr[i].first, int(1e9))) - arr;
      if(arr[i].second ^ arr[i-1].second) reverse(arr + i, arr + temp);
    }
    int m, x;
    for (scanf("%d", &m); m--;) scanf("%d", &x), printf("%d %d\n", arr[x].first, arr[x].second);


  }

  return 0;
}
