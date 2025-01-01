#include<iostream>
#include <stack>
using namespace std;

void Stacks(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    cout<<st.empty()<<endl;

    stack<int>st1,st2;
    st1.swap(st2);

    cout<<st2.size();
}

int main(){
    Stacks();
    return 0;
}