#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void hilbert(int direction, int index, int t, int l, bool flag);

int X;
int Y;

int main(){


  int numTestCases;
  cin >> numTestCases;
  while(numTestCases--){
    int N, M;
    cin >> N >> M;
    X = 1;
    Y = 1;
    hilbert(0, 0, M - 1, N, false);
    cout << X << " " << Y << endl;
  }


}

void hilbert(int direction, int index, int t, int l, bool flag) {
	if (t == 0) {
		if (flag) {
			X += l - 1;
			Y += l - 1;
		}
		return;
	}

 	int hl = l / 2;
	int k = t / (hl * hl);
	int nextDirection = direction;
	int nextIndex = index;
 	if (k == 0) nextDirection = (direction + 1) % 2;
	if (k == 3) {
		nextDirection = (direction + 1) % 2;
		nextIndex = (index + 2) % 4;
		flag = !flag;
	}
 	int temp = ((direction == 1) ? (4 + index - k) : (index + k)) % 4;
	if (temp == 1) Y = Y + hl;
	if (temp == 2) {
		X = X + hl;
		Y = Y + hl;
	}
	if (temp == 3)
		X = X + hl;

 	hilbert(nextDirection, nextIndex, t - (hl * hl * k), hl, flag);
}
