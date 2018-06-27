#include <cstdio>
#include <stack>

using namespace std;

stack <pair<int, int> > st;

int main(){

  int numTestCases;
  scanf("%d", &numTestCases);

  for(int i = 1; i < numTestCases + 1; i++){
    int num;
    scanf("%d", &num);


    while (!st.empty()){

      if(num <= st.top().second){
        printf("%d ", st.top().first);
        break;
      }

      st.pop();

    }

    if(st.empty()) printf("%d ", 0);

    st.push(make_pair(i, num));

  }


}
