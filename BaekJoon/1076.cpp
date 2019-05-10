#include <iostream>
#include <map>
#include <string>

using namespace std;

const int mulArr[] = {1, 10, 100, 1000, 10000, 100000,
                    1000000, 10000000, 100000000, 1000000000};

int main(){

  map <string, int> m;

  m.insert(make_pair("black", 0));
  m.insert(make_pair("brown", 1));
  m.insert(make_pair("red", 2));
  m.insert(make_pair("orange", 3));
  m.insert(make_pair("yellow", 4));
  m.insert(make_pair("green", 5));
  m.insert(make_pair("blue", 6));
  m.insert(make_pair("violet", 7));
  m.insert(make_pair("grey", 8));
  m.insert(make_pair("white", 9));

  string str;
  cin >> str;

  long long int result;
  result = m.find(str)->second * 10;

  cin >> str;
  result += m.find(str)->second;

  cin >> str;

  result *= mulArr[m.find(str)->second];

  cout << result << endl;

  return 0;
}
