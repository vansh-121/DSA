#include<iostream>
using namespace std;

void patt2(int n){
    int i, j;
    int num=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num;
            num+=1;
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