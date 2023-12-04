#include<iostream>
#include<stack>
using namespace std;

bool redundantBrackets(string &s){
    stack <char> st;
    char ch;

    for(int i=0; i<s.size(); i++){
        ch = s[i];

        if(ch == '('){
            st.push(ch);
        }
        else if(ch == '+'||ch == '-'||ch == '*'||ch == '/'){
            st.push(ch);
        }
        else if(ch == ')'){
            if(st.top() == '('){
                return true;  
            }

            
            while(!st.empty() && st.top() != '('){
                st.pop();
            }
            st.pop();  
        }
    }

    return false; 
}

int main(){
    string str;
    cout<<"Enter the expression: "<<endl;
    cin>>str;

    if(redundantBrackets(str)){
        cout<<"There are redundant brackets.";
    }
    else{
        cout<<"The expression does not contain redundant brackets.";
    }

    return 0;
}
