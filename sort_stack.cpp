#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack <int> &st, int target){
    if(st.empty()){
        st.push(target);
        return;
    }
    int topElement=st.top();

    if(topElement>=target){
        st.push(target);
        return;
    }

    st.pop();

    insertSorted(st,target);

    st.push(topElement);

}

void sort(stack <int> &st){
    if(st.empty()){
        return;
    }

    int topElement=st.top();
    st.pop();

    sort(st);

    insertSorted(st,topElement);

}

int main(){

    stack<int> s;

    s.push(23);
    s.push(3);
    s.push(53);
    s.push(26);
    s.push(78);
    s.push(20);
    s.push(50);
    s.push(97);
    s.push(106);


    sort(s);


    cout<<"The sorted stack is: "<<endl;

    while(!s.empty()){

        cout<<s.top()<<endl;
        s.pop();
    }

    


}