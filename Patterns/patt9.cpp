#include<iostream>
using namespace std;

void patt2(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        for(j=1;j<=n-i-1;j++){
            cout<<" ";
        }
       
        cout<<endl;
    }
}

void patt3(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        for(j=1;j<=2* n - (2*i+1);j++){
            cout<<"*";
        }
        for(j=1;j<=i;j++){
            cout<<" ";
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
        patt3(n);
}
    return 0;
}