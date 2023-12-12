#include<iostream>
using namespace std;

class Queue {
    int *queue;
    int front;
    int rear;
    int size;

public:
    Queue(int size) {
        queue = new int[size];
        this->size = size;
        front = rear = -1;
    }


    ~Queue() {
        delete[] queue;
    }


    bool isEmpty() {
        return (front == -1 && rear == -1);
    }


    bool isFull() {
        return (rear >= size - 1);
    }



    void enqueue(int n) {
        if (isFull()) {
            cout << "Queue is full, cannot push more elements." << endl;
        } else if (isEmpty()) {
            front++;
            queue[++rear] = n;
        } else {
            queue[++rear] = n;
        }
    }



    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot pop more elements." << endl;
           
            return -1;
        } else if (front == rear) {
            int value = queue[rear];
            reset();
            return value;
        } else {
            return queue[front++];
        }
    }



    void reset() {
        front = rear = -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "The queue is empty." <<endl;
        } else {
            cout << "The elements present in the queue are: "<<endl;
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << endl;
            }
        }
    }
};


int main() {
    Queue q(10);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);


    // Trying to enqueue more elements.
    q.enqueue(110);

    // Deleting first five elements from the queue
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();


    // Deleting the next five elements of the queue.
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    // q.display();

    return 0;
}
