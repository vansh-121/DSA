#include<iostream>
#include<set>

using namespace std;

void Set(){
    set<int>s;

    s.insert(1); //1
    s.emplace(2); //2
    s.emplace(2); //2,2
    s.insert(3); //1,2,3

    cout<<s.size()<<endl;

    auto it = s.find(3);
    
    s.erase(3);

    cout<<s.size()<<endl;

    int cnt = s.count(1);

    auto it = s.find(1);
    s.erase(it);
    
    cout<<s.size()<<endl;



}

int main(){
    Set();
}