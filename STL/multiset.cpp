#include<iostream>
#include<set>

using namespace std;

void Multiset(){
    multiset<int>ms;
    ms.insert(1); //1
    ms.insert(1); //1,1
    ms.insert(1); //1,1,1
    ms.insert(3);

    cout<<ms.size()<<endl;

    ms.erase(ms.find(1));

    cout<<ms.size()<<endl;



}

int main(){
    Multiset();
}