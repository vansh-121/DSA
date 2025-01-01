#include<iostream>
#include <vector>
using namespace std;

void Vectors(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;

    v.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);
    vector<int>::iterator it = v.begin;

    it++;
    cout<< *(it) << " ";


    for(auto it = v.begin; it!= v.end();it++ ){
        cout<<*(it)<<" ";
    }
}

int main(){
    Vectors();
    return 0;
}