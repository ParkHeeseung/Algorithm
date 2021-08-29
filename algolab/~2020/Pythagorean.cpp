#include <iostream>
#include <fstream>

using namespace std;

int PE(int s, int a);

// n : 팀 개수
// m : 전체 경기 수

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  while(numTestCases --){

    long long int n, m, min = 9999, max = 0;

    inStream >> n >> m;

     long long int arr1[n+1];
     long long int arr2[n+1];

    for(int i = 0; i < n + 1; i++){
      arr1[i] = 0;
      arr2[i] = 0;
    }

    for(int i = 0; i < m; i++){
      int a, b, p, q;
      inStream >> a >> b >> p >> q;
      arr1[a] += p; arr1[b] += q;
      arr2[a] += q; arr2[b] += p;
    }

    for(int i = 1; i <= n; i++){
      long long int result = PE(arr1[i], arr2[i]);
      if(result < min) min = result;
      if(result > max) max = result;
    }

    cout << max << "\n";
    cout << min << "\n";

  }

  return 0;
}

int PE(int s, int a){
  if(s == 0 && a == 0) return 0;
  long long int score = s * s;
  score *= 1000;
  score /= ((s * s) + (a * a));
  return (long long int)score;
}
