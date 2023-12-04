#include<iostream>
using namespace std;

class stack {

    int size;
    int top;
    int *arr;

public:

    stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    ~stack() {
        delete[] arr;
    }

void push(int n) {
    if (!isFull()) {
        top++;  
        arr[top] = n;
        cout << "Pushed " << n << " to the stack.\n";
    } else {
        cout << "Cannot push more elements, stack is full.\n";
    }
}


void pop() {
    if (isEmpty()) {
        cout << "Cannot pop more elements, stack is already empty.\n";
    } else {
        cout << "Popped " << arr[top] << " from the stack\n";
        top--;
    }
}



    int peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return -1;  // or some other indicator for an empty stack
    }

    bool isEmpty() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return true;
        }
        return false;
    }

    bool isFull() {
        if (top >= size - 1) {
            cout << "Stack is full.\n";
            return true;
        }
        return false;
    }

};

int main() {
    stack s(10);

    cout << "Peek value: " << s.peek() << endl;

    s.push(5);
    s.push(98);
    s.push(54);
    s.push(56);
    s.push(78);
    s.push(59);
    s.push(69);
    s.push(98);
    s.push(54);
    s.push(56);

    // Attempting to push one more element
    s.push(78);

    // Popping all elements
    while (!s.isEmpty()) {
        s.pop();
    }

    s.isEmpty();
    s.isFull();

    return 0;
}
