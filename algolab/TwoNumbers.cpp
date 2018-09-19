#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAX_SIZE = 1000001;

int arr[MAX_SIZE];

void func(int n, int s);

int main(){

    int numTestCases;
    scanf("%d", &numTestCases);

    while(numTestCases --){
      int n, s;
      scanf("%d%d", &n, &s);

      for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
      }

      func(n, s);

    }

  return 0;
}

void func(int n, int s) {

  sort(arr, arr + n);

  int nearNum = 999999999;
  int result = 0;
  int front = 0, end = n - 1;


  while(end > front){

    int sumN = arr[front] + arr[end];
    int diff = abs(s - sumN);
    if(s > sumN){
      front ++;
      if(nearNum > diff){
        nearNum = diff;
        result = 1;
      }
      else if(nearNum == diff){
        result ++;
      }
    }
    else{
      if(nearNum > diff){
        nearNum = diff;
        result = 1;
      }
      else if(nearNum == diff){
        result ++;
      }
      end --;
    }
  }


  printf("%d\n", result);

}
