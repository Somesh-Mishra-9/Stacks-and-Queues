#include<iostream>
#include<stack>
using namespace std;

class Queue{
  stack <int> s1,s2;

  public:

  void enQueue(int n){
    if(!s1.empty()){
      int temp=s1.top();
      s1.pop();
      s2.push(temp);
    }
    s1.push(n);
    if(!s2.empty()){
      int temp=s2.top();
      s2.pop();
      s1.push(temp);
    }

   
  
  }

  int deQueue(){
    if(s1.empty()){
      return -1;
    }

    else{
      int temp=s1.top();
      s1.pop();

      return temp;
    }
  }

  bool empty(){
    return s1.empty() && s2.empty();
  }
};


int main(){
  Queue rider;

  rider.enQueue(10);
  rider.enQueue(20);
  rider.enQueue(30);
  rider.enQueue(40);
  rider.enQueue(50);
  rider.enQueue(60);
  rider.enQueue(70);
  rider.enQueue(80);
  rider.enQueue(90);
  rider.enQueue(100);


  rider.deQueue();
  rider.deQueue();
  rider.deQueue();
  rider.deQueue();


  cout<<"The elements in the queue are:"<<endl;

  while(!rider.empty()){
    cout<<rider.deQueue()<<endl;
  }




}
