#include <iostream>

using namespace std;

long long front, digit;
int result[10];

void book_page(int end);
void count(int n);

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  front = 1;
  digit = 1;

  int n;
  cin >> n;
  book_page(n);

  return 0;

}

void book_page(int end){

  while(front <= end){

    while(front % 10 != 0 && front <= end) count(front++);

    if(front > end) break;

    while(end % 10 != 9 && front <= end) count(end--);

    long long cnt = (end / 10) - (front / 10) + 1;

    for(int i = 0; i < 10; i++) result[i] += cnt * digit;

    front /= 10, end /= 10, digit *= 10;

  }

  for (int i = 0; i < 10; i++) cout << result[i] << " ";

}

void count(int n){

  for(int i = n; i > 0; i /= 10) result[i % 10] += digit;

}
