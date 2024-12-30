#include<iostream>
using namespace std;

void patt15(int n){
    int i, j;
    char ch;
    for(i=1;i<=n;i++){
        for(ch= 'A';ch<='A'+n-i;ch++){
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