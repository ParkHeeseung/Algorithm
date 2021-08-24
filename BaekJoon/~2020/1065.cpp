#include <iostream>

using namespace std;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, result, a[3];
  cin >> N;

  for(int i = 1; i < N + 1; i++){
    if (i < 100) result = i;
    else if(i == 1000) break;
    else{
      int j = 0, num = i;
      while(num > 0){
        a[j] = num % 10;
        num /= 10;
        j++;
      }
      if (a[0] - a[1] == a[1] - a[2]) result++;
    }
  }

  cout << result << '\n';
  return 0;
}
