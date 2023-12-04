#include<iostream>
using namespace std;

class stacks{
    int *arr;
    int top1;
    int top2;
    int size;

    public:

    stacks(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }


    void push1(int n){
        if(!isFull1()){
            arr[++top1]=n;
        }

    }

    void pop1(){
        if(top1>-1){
            top1--;
        }

    }

    int peek1(){
        if(!isEmpty1()){
            return arr[top1];
        }

    }

    bool isEmpty1(){
        if(top1==-1)return true;
        return false;
    }

    bool isFull1(){
        if(top2-top1<=1){
            return true;
        }
        return false;
    }


    void push2(int n){
         if(!isFull1()){
            arr[--top2]=n;
        }

    }

    void pop2(){
        if(!isEmpty2()){
            top2++;
        }

    }

    int peek2(){
        if(!isEmpty2()){
            return arr[top2];
        }

    }

    bool isEmpty2(){
        if(top2==size)return true;

        return false;

    }

    bool isFull2(){
          if(top2-top1<=1){
            return true;
        }
        return false;

    }





    
};

int main(){

    stacks s(10);

    // pushing items to stack 1
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push1(5);
    

    //pushing items to stack 2
    s.push2(6);
    s.push2(7);
    s.push2(8);
    s.push2(9);
    s.push2(10);

    //Trying to push more items.
    s.push1(23);
    s.push2(45);


    //printing stack 1:

    cout<<"The items present in stack 1 are:"<<endl;

    while(!s.isEmpty1()){
        cout<<s.peek1()<<endl;
        s.pop1();
    }


    //printing stack 2:

    cout<<"The items present in stack 2 are:"<<endl;

    while(!s.isEmpty2()){
        cout<<s.peek2()<<endl;
        s.pop2();
    }




    

}