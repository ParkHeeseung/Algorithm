#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 10001;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[MAX_SIZE];
  int numTeam, count = 0;

  cin >> numTeam;

  for(int i = 0;i < numTeam; i++){
    cin >> arr[i];
  }

  sort(arr, arr + numTeam);

  for(int i = 0; i < numTeam; i++){
    count += arr[i];
    if(count < (i * (i + 1) / 2)){
      cout << -1<< endl;
      return 0;
    }
  }
  if(count == numTeam * (numTeam - 1) / 2){
    cout << 1 << endl;
  }
  else{
    cout << -1 << endl;
  }


  return 0;
}
