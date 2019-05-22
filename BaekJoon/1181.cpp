#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string a, string b){
  if(a.size() == b.size()){
    return a < b;
  }
  else{
    return a.size() < b.size();
  }
}


int main(){

  int N;
  cin >> N;

  vector <string> vec;

  for(int i = 0; i < N; i++){
    string str;
    cin >> str;
    vec.push_back(str);
  }

  sort(vec.begin(), vec.end(), cmp);

  for(int i = 0; i < N; i++){
    cout << vec.at(i) << endl;
  }

  return 0;

}
