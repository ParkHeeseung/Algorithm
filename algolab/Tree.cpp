#include <cstdio>
#include <cmath>

using namespace std;

typedef long long ll;
const int MAX_SIZE = 2222222;

void initMax(int node, int high, int sum);
int search(int node, int high, int sum);

int n, maxN;
int arr[MAX_SIZE];

int main(){

  int numTestCases;
  scanf("%d", &numTestCases);
  while(numTestCases --){

    maxN = -1;

    scanf("%d",&n);

    int N = pow(2, n + 1);

    for(int i = 2; i < N; i++){
      scanf("%d", &arr[i]);
    }

    initMax(1, 0, maxN);
    search(1, 0, 0);
    ll result = 0;

    for(int i = 1; i < N; i++){
      result += (ll)arr[i];
    }

    printf("%lld\n", result);

  }

  return 0;
}

void initMax(int node, int high, int sum){

  if(n == high){
    sum += arr[node];
    maxN = maxN < sum ? sum : maxN;
    return;
  }

  initMax(node * 2, high + 1, sum + arr[node]);
  initMax(node * 2 + 1, high + 1,sum + arr[node]);
}

int search(int node, int high, int sum){
  if(n == high){
    return maxN - (sum + arr[node]);
  }

  int a = search(node * 2, high + 1, sum + arr[node]);
  int b = search(node * 2 + 1, high + 1,sum + arr[node]);
  int minN = a < b ? a : b;
  arr[node * 2] += (a - minN);
  arr[node * 2 + 1] += (b - minN);

  return minN;
}
