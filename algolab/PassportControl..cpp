#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>


using namespace std;

int main(){

  ifstream inStream;
  inStream.open("input.txt");
  int numTestCases;
  inStream >> numTestCases;

  while(numTestCases --){


    int n, k;
    inStream >> n >> k;
    if(inStream.peek() == EOF) break;

    int arr[n];
    int queue[k];

    memset(queue, 0, sizeof(queue));

    for(int i = 0; i < n; i++){
      inStream >> arr[i];
    }

    bool error = false;

    queue[0] = arr[0];

    for(int i = 1; i < n; i++){

      for(int j = 0; j < k; j++){

        if(queue[j] < arr[i]){
          queue[j] = arr[i];
          break;
        }

        else if(queue[j] == 0){
          queue[j] = arr[i];
          break;
        }
        else{
          if(j == k - 1){
            error = true;
          }
        }

        if(error) break;

      }

      //4 5 6 8 9
      //1 3 7 10
      //2

    }

    if(error) cout << "NO" << endl;
    else cout << "YES" << endl;




  }

  return 0;
}
