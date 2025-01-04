#include<iostream>

using namespace std;

void countdigit(){
    int n;
    cin>>n;
    int count = 0;
    while(n>0){
        count = count+1;
        n= n/10;
    }
    cout<<count;
}

int main(){
    int n;
    countdigit();
    return 0;
}