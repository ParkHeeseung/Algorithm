#include <iostream>

using namespace std;

bool isPrime(int num){
  if(num == 1) return false;
  
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main()
{

  int n, result = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    if(isPrime(data)) result ++;
  }

  cout << result << '\n';

  return 0;
}