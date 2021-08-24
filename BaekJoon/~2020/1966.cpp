#include <iostream>
#include <queue>


using namespace std;



int main(){

  int numTestCases;
  cin >> numTestCases;

  for (int i = 0; i < numTestCases; i++){
    int numDataCases;
    int out_index;
    int result = 0;
    bool check = false;

    priority_queue<int> pq;
    queue<int> q;
    queue<int> index;

    cin >> numDataCases >> out_index;

    for(int j = 0; j < numDataCases; j++){
      int num;
      cin >> num;

      pq.push(num);
      q.push(num);
      index.push(j);

    }

    while(!check){
      if(pq.top() == q.front()){
        pq.pop();
        q.pop();

        result++;

        if(out_index == index.front()){
          check = true;
          break;
        }
        index.pop();
        if(check) break;
      }
      else{
        int save = q.front();
        q.pop();
        q.push(save);

        int next_index = index.front();
        index.pop();
        index.push(next_index);

      }

    }

      cout << result << endl;
    }


}
