#include<iostream>
#include<stack>
using namespace std;

bool validParetheses(string s){
    stack <char> st;
    for(int i=0;i<s.size();i++){
      char ch=s[i];

       if(ch=='('||ch=='{'||ch=='['){
        st.push(ch);
       }

         else{
                
                if(st.empty()){
                    return false;
                }
                else{
                char topch=st.top();
                
                if(ch==')'&& topch=='(') st.pop();
               else if(ch=='}'&& topch=='{') st.pop();
                else if(ch==']'&& topch=='[') st.pop();
                
                else{
                    return false;
                }
                }

       }
    }

    if(st.empty()){
        return true;
    }

    else{
        return false;
    }

}


int main(){
   string str;
   cout<<"Enter your testcase: ";

   cin>>str;

   if(validParetheses(str)){
    cout<<"The expression is valid";
   }

   else{
    cout<<"The expression is not valid.";
   }


return 0;
}