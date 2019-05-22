#include<iostream>
using namespace std;

const int num[] = {0, 0, 0, 2, 2, 3, 3, 4, 4};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    int sum = 0;

    for(int i = 0; i < K; i++){
        int A;
        cin >> A;
        sum += num[A];
    }

    if(N <= sum){
      cout << "YES";
    }
    else{
      cout << "NO";
    }

    return 0;
}
