#include<iostream>
using namespace std;

void patt15(int n){
    int i, j;
    for(i=0;i<n;i++){
        char ch = 'A'+i;
        for(j=0;j<=i;j++){
            cout<<ch;
       
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
        patt15(n);
    }
    return 0;
}