#include <iostream>
#include <fstream>

using namespace std;

//N - 다리를 건너는 트럭의 수
//W - 다리의 길이
//L - 다리의 최대하중

const int MAX_SIZE = 1001;
int t[MAX_SIZE] = { 0, };
int q[MAX_SIZE] = { 0, };

int main(){

  ifstream inStream;
  inStream.open("input.txt");

  int numTestCases;
  int n, w, l;
  inStream >> numTestCases;

  while(numTestCases --){

    inStream >> n >> w >> l;

    for(int i = 1, j = 1; i <= n; i++) {
      inStream >> t[i];
      t[i] += t[i - 1];
      q[i] = q[i - 1] + 1;
      while(t[i] - t[j - 1] > l || q[i] - q[j] == w){
        q[i] = q[j++] + w;
      }
    }

    cout << q[n] + w << endl;

  }



  return 0;
}
