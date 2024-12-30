#include<iostream>
using namespace std;

void patt15(int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        
        }

        char ch = 'A';
        for(j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<= (2*i-1)/2){
                ch++;
            }
            else {
                ch--;
            }
        }



        for(j=1;j<=n-i;j++){
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
        patt15(n);
    }
    return 0;
}