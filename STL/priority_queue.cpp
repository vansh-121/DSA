#include<iostream>
#include<queue>

using namespace std;

void PriorityQueue(){
    priority_queue<int>pq;

    //Maximum Heap 

    pq.push(1); //1
    pq.push(2); //2,1
    pq.push(9); //9,2,1
    
    pq.emplace(8); //9,8,2,1


    cout<<pq.top()<<endl;
    
    pq.pop();//8,2,1

    cout<<pq.top()<<endl;

    //Minimum Heap 

    priority_queue<int, vector<int>,greater<int>> a;
    a.push(5); //5
    a.push(1); //1,5
    a.push(7); //1,5,7
    a.push(2); //1,2,5,7
    
    a.pop();
    cout<<a.top()<<endl; //2

    a.emplace(1);

    cout<<a.top(); //1

}

int main(){
    PriorityQueue();
}