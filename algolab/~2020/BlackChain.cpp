#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int numTestCases;
	cin >> numTestCases;

	while(numTestCases--){

		long long num;
    long long result = 1;
		cin >> num;

		while(num + 1 > result + (result + 1)*((long long)pow(2, result++ + 1) - 1));

    cout << --result << endl;
	}

  return 0;
}
