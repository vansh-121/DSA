#include<iostream>
using namespace std;

void patt2(int n){
    int i,j;
    int start = 1;
    for(i=0;i<n;i++){
        if(i%2==0){
            start = 1;
        }
        else {
            start = 0;
        }
        for(j = 0;j<=i;j++){
            cout<<start;
            start = !start;
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        patt2(n);
    }
    return 0;
}