#include<iostream>
using namespace std;

void patt2(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<"*";
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