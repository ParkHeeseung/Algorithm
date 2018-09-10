#include <iostream>
#include <string>

using namespace std;

bool palindrome(string str, int front, int end);

int main() {

  int numTestCases;
  cin >> numTestCases;

  while(numTestCases--){

    string str;
    cin >> str;

    cout << palindrome(str, 0, str.size() - 1) << endl;

  }

  return 0;
}

bool palindrome(string str, int front, int end){


  if(str.at(front) != str.at(end)) return false;

  if (end - front < 2) return true;
  
  return palindrome(str, front + 1, end - 1);
}
