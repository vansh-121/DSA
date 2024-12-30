#include<iostream>
using namespace std;

void patt2(int n){
    int i, j;
    char ch;
    for(i=0;i<n;i++){
        for(ch= 'A';ch<='A'+i;ch++){
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
        patt2(n);
    }
    return 0;
}