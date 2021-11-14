#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {

    long long x, y;

    cin >> x >> y;

    long long j = 1;
    while (j * j <= (y - x))
    {
      j++;
    }

    j--;

    long long remaining = (y - x) - (j * j);

    remaining = (long long)ceil((double)remaining / (double)j);

    cout << j * 2 - 1 + remaining << "\n";
  }

  return 0;
}