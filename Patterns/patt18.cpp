#include<iostream>
using namespace std;

void patt15(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout<< ch ;
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