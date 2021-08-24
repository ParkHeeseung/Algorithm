#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 16;

int arrT[MAX_SIZE];
int arrP[MAX_SIZE];
int result;

void profit(int start, int sum, int N);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  for(int i = 1; i <= N; i++){
    cin >> arrT[i];
    cin >> arrP[i];
  }

  profit(1, 0, N);

  cout << result << endl;

  return 0;

}

void profit(int start, int sum, int N){
    if(start == N + 1){
      if(sum > result) result = sum;
      return;
    }

    profit(start + 1, sum, N);

    if(start + arrT[start] <= N + 1) profit(start + arrT[start], sum + arrP[start], N);
}
