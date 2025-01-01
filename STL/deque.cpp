#include<iostream>
#include<deque>

using namespace std;

void Deque(){
    deque<int> dq;

    dq.push_back(5); // 5
    dq.emplace_front(1); //1,5

    dq.push_front(7); //7,1,5
    dq.emplace_back(6); //7,1,5,6

    cout<<dq.back()<<endl;

    cout<<dq.front()<<endl;

    
}

int main(){
    Deque();
}