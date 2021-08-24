#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

string thirty();
string intToString(int n);

vector <int> vec;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string N;
  cin >> N;

  for(int i = 0; i < N.size(); i++){
    vec.push_back(N.at(i) - '0');
  }

  sort(vec.begin(), vec.end());


  if(vec.at(0) != 0) cout << -1;
  else cout << thirty();

  return 0;

}

string thirty(){

  int count = 0;
  string result = "0";

  for(int i = 1; i < vec.size(); i++){
    count += vec.at(i);
    result = intToString(vec.at(i)) + result;
  }

  if(count % 3 != 0) return "-1";
  else return result;
}

string intToString(int n){

  stringstream s;

  s << n;

  return s.str();

}
