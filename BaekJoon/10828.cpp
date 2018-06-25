#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 10000;

class stack{

private:

  int index;
  int data[MAX_SIZE];

public:

  stack();
  ~stack();
  void push(int num);
  int pop();
  int size();
  bool empty();
  int top();

};

stack::stack(){
  index = -1;
}

stack::~stack(){}

void stack::push(int num){

  data[++index] = num;

}


int stack::pop(){

  if(empty()){
    return -1;
  }

  return data[index--];

}

int stack::size(){

  return index + 1;

}

bool stack::empty(){

  return index == -1;

}

int stack::top(){

  if(empty()){
    return -1;
  }

  return data[index];

}

int main(){

  stack stack;
  int numTestCases;
  cin >> numTestCases;

  for(int i = 0; i < numTestCases; i++){

    string str;

    cin >> str;

    if(str == "push"){
      int num;
      cin >> num;
      stack.push(num);
    }
    else if(str == "pop"){
      cout << stack.pop() << endl;
    }
    else if(str == "size"){
      cout << stack.size() << endl;
    }
    else if(str == "empty"){
      cout << stack.empty() << endl;
    }
    else if(str == "top"){
      cout << stack.top() << endl;
    }

  }


  return 0;
}
