#include<iostream>
using namespace std;

void patt1(int n){
      int i, j;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        // cout<<endl;
    
        for(j=1;j<=2*i;j++){
        cout<<" ";
    }
    for(j=1;j<=n-i;j++){
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
    patt1(n);
    }
    return 0;
}