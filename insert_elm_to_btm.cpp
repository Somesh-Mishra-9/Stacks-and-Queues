#include<iostream>
#include<stack>
using namespace std;

void insertBottom(stack<int>&s,int target){

if(s.empty()){
    s.push(target);
    return;
}
int temp=s.top();
s.pop();

insertBottom(s,target);
s.push(temp);

}

int main(){

    stack<int> s;

    //Pushing elements to the stack.

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

    int target=s.top();
    s.pop(); 

    insertBottom(s,target);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


}