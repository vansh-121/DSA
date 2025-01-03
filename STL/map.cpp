#include<iostream>
#include<map>
using namespace std;

void Map(){
    map<int,int> m;
    map<int,pair<int,int>> p;
    map<pair<int,int>,int> o;

    m[1]=2;
    m.insert({3,1});

    m.insert({2,3});

    o[{2,3}] = 10;

    for(auto it : m){
        cout<<it.first<<" "<<it.second<<" "<<endl;
    }

    cout<<m[1];
    cout<<m[2];

    auto it = m.find(3);
    cout<< it.second;
}



int main(){
    Map();
}