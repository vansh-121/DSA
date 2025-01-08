#include<iostream>
using namespace std;

int RevNo(int n){
    cin>>n;
    int lastdigit ;
    int rev=0;
    x = abs(x);
    while(n>0){
        lastdigit = n%10;
        n = n/10;
        
        rev= (rev*10) + lastdigit;
    }
    if(n<0){
            rev = -rev;
            cout<<rev;  
    }
}

int main(){
    int n;
    RevNo(n);
}