#include<iostream>
#include<stack>

using namespace std;

int main(){

    string str="Somesh";

    stack<char> s;

    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    //printing the reversed string.

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }


    



}