#include <iostream>
using namespace std;

class Queue {
    private:
        int front, rear;
        int arr[10];
    public:
        Queue() {
            front = -1;
            rear = -1;
        }
        void enqueue(int n) {
            if (front == -1) {
                front = 0;
            }
            arr[++rear] = n;
        }
        void dequeue() {
            if (front > rear || front == -1) {
                cout << "Queue is empty." << endl;
                return;
            }
            cout << "Element dequeued from queue is : " << arr[front++] << endl;
        }
        bool isEmpty() {
            if (front == -1 || front > rear) {
                return true;
            }
            return false;
        }
        bool isFull() {
            if (rear == 999) {
                return true;
            }
            return false;
        }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(80);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    if(q.isEmpty()){
      
    }

    else{
      cout<<"The stack is not empty.";
    }
    return 0;
}
