#include<iostream>
#include<list>

using namespace std;

void Lists(){
    list<int> ls;

    ls.push_back(2); //2
    ls.emplace_back(3); //2,3
    
    ls.push_front(5); //5,2,3

    ls.emplace_front(9); //9,5,2,3
    

    cout<<ls.size()<<endl;

    cout<<ls.front()<<endl;

    cout<<ls.back()<<endl;

}

int main(){
    Lists();
}