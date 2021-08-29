#include <iostream>
#include <fstream>

using namespace std;

int T, H, W, N;

//H 층수
//W 한층의 방 개수
//N 몇 번째 손님

int Hotel();

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  inStream >> T;

  for(int i = 0; i < T; i++){

    inStream >> H >> W >> N;
    cout << Hotel() << "\n";
  }

  return 0;
}

int Hotel(){

  int q, r, result;

  q = N / H + 1;
  r = N % H;

  if(r == 0) {
    r = H;
    q -= 1;
  }

  result = r * 100 + q;

  return result;

}
