#include<iostream>
using namespace std;


void patt3(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
       
        cout<<endl;
    }
}
void patt4(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
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
        patt3(n);
        patt4(n);
}
    return 0;
}