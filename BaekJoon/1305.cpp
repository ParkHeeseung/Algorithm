#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector <int> getPi(string p);

int main(){
    int L;
    cin >> L;

    string str;
    cin >> str;

    vector <int> q = getPi(str);
    cout <<L -  q[L - 1] << endl;

    return 0;
}

vector <int> getPi(string p){

  int m = (int)p.size();
  int j = 0;

  vector <int> pi(m, 0);

  for(int i = 1; i < m; i++){
    while(j > 0 && p[i] != p[j]){
      j = pi[j - 1];
    }
    if(p[i] == p[j]){
      pi[i] = ++j;
    }
  }

  return pi;
}
