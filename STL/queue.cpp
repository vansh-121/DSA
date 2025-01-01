#include<iostream>
#include<queue>

using namespace std;

void Queue(){
    queue<int> q;

    q.push(1); //1
    q.push(2); //1,2
    q.emplace(3); //1,2,3

    q.back() +=5; //1,2,8

    cout<<q.back()<<endl;

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;
}

int main(){
    Queue();
}