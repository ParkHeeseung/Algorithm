#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		long long num;
		long long one_Check = 1;
		int flag = 1;

		cin >> num;

		while(flag)
		{
			long long x = one_Check + (one_Check + 1)*((long long)pow(2, one_Check + 1) - 1);
			//cout << x << endl;
			if(num <= x)
			{
				cout << one_Check << endl;
				flag = 0;
			}
			one_Check += 1;
		}
	}
}
