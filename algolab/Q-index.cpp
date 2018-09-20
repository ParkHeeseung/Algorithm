#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAX_SIZE = 1001;


void func(int n, int arr[]);

int main(){

  int numTestCases;
  scanf("%d", &numTestCases);

  while(numTestCases --){

    int arr[MAX_SIZE];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }

    func(n, arr);

  }

  return 0;
}

void func(int n, int arr[]) {

  sort(arr, arr + n);

  for(int i = n; i >= 0; i--){
    if(arr[n - i] >= i){
      printf("%d\n", i);
      break;
    }
  }

}
