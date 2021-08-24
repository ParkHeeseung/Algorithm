#include <iostream>

using namespace std;

const int MAX_SIZE = 10000;

class queue{

private:

  int arr[MAX_SIZE];
  int front;
  int rear;
  int size;

public:

  queue();
  ~queue();
  void push(int data);
  int pop();
  bool empty();
  int getSize();
  int getFront();
  int getBack();

};



queue::queue(){

  front = 0;
  rear = 0;
  size = 0;

}

queue::~queue(){
}

void queue::push(int data){

  arr[rear] = data;

  if(rear + 1 >= MAX_SIZE) rear = 0;
  else rear++;

  size++;


}


bool queue::empty(){

  if(front == rear) return true;
  return false;

}


int queue::getFront(){

  if(empty()) return -1;
  return arr[front];

}

int queue::getBack(){

  if(empty()) return -1;
  return arr[rear -1];

}

int queue::pop(){

  if(empty()) return -1;

  int data = arr[front];

  if (front + 1 >= MAX_SIZE) front = 0;
  else front ++;

  size--;

  return data;

}

int queue::getSize(){

  return size;

}

int main(){

    int numTestCases;
    cin >> numTestCases;

    queue q;
    int data;

    for(int i = 0; i < numTestCases; i++){

      string str;
      cin >> str;

      if(str == "push"){
        cin >> data;
        q.push(data);
      }
      else if(str == "pop"){
        cout << q.pop() << endl;
      }
      else if(str == "size"){
        cout << q.getSize() << endl;
      }
      else if(str == "empty"){
        cout << q.empty() << endl;
      }
      else if(str == "front"){
        cout << q.getFront() << endl;
      }
      else if(str == "back"){
        cout << q.getBack() << endl;
      }

    }


    return 0;
}
