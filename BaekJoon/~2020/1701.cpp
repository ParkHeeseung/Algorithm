#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int getPi(string p);

int main(){

    string str;
    cin >> str;

    cout << getPi(str);
    return 0;
}

int getPi(string p){

  int max = 0;

	vector <vector<int> > table;

	table.resize(p.size());

	for (int k = 0; k < p.size(); k++)

	{

		table[k].resize(p.size()-k,0);

		string part = p.substr(k, p.size());

		int j = 0;

		table[k][0] = 0;

		for (int i = 1; i < part.size(); i++)

		{

			while (j > 0 && part[i] != part[j])

				j = table[k][j - 1];



			if (part[i] == part[j])

				table[k][i] = ++j;



			if (max < table[k][i])

				max = table[k][i];

		}

	}

	return max;
}
