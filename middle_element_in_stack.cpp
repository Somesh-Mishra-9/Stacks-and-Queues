#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s,int &totalSize){
    if(s.empty()){
        cout<<"Stack is empty";
        return;
    }

    if(s.size()==(totalSize/2+1)) {
        cout<<"Middle element is: "<< s.top();
        return;
    }

    int temp=s.top();
    s.pop();
    int size=s.size();
    printMiddle(s,totalSize);
    s.push(temp);

}

int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);

    int totalSize=s.size();

    printMiddle(s, totalSize);


return 0;
}