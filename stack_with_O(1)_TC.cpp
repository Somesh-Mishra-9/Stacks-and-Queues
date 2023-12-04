#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Minstack {
public:
    vector<pair<int, int>> st;

    Minstack() {}

    void push(int value) {
        if (st.empty()) {
            pair<int, int> p = make_pair(value, value);
            st.push_back(p);
        } else {
            pair<int, int> p;
            p.first = value;
            p.second = min(value, st.back().second);
            st.push_back(p);
        }
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
        return st.back().second;
    }
};

int main() {
    Minstack myStack;

    myStack.push(3);
    myStack.push(5);
    cout << "Top element: " << myStack.top() << endl;
    cout << "Minimum element: " << myStack.getMin() << endl;

    myStack.push(2);
    myStack.push(1);
    cout << "Top element: " << myStack.top() << endl;
    cout << "Minimum element: " << myStack.getMin() << endl;

    myStack.pop();
    cout << "Top element: " << myStack.top() << endl;
    cout << "Minimum element: " << myStack.getMin() << endl;

    return 0;
}
