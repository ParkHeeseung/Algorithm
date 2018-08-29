#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

const int MAX_SIZE = 1000;
int N, W, L, arr[MAX_SIZE];

//N - 다리를 건너는 트럭의 수
//W - 다리의 길이
//L - 다리의 최대하중

int Trucks();

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  inStream >> N >> W >> L;

  for(int i = 0; i < N; i++){
    inStream >> arr[i];
  }

  cout << Trucks() << "\n";


  return 0;
}

int Trucks(){

  int result = W, sum = 0;
  queue<int> q;


  for(int i = 0; i < N; i++){

    int temp = arr[i];

    while(1){

      if(q.empty()){
        q.push(temp);
        sum += temp;
        result ++;
        break;
      }
      else if(q.size() == W){
        sum -= q.front(); q.pop();
      }
      else{
        if(sum + temp > L){
          q.push(0);
          result ++;
        }
        else{
          sum += temp;
          q.push(temp);
          result ++;
          break;
        }
      }
    }

  }

  return result;

}
