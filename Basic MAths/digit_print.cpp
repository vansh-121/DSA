#include<iostream>
using namespace std;

void DigitsPPrint(){
    int n;
    cin>>n;
    while(n >0){
        int lastdigit = n%10;
        cout<<lastdigit<<endl;
        n = n/10;
    }
}

int main(){
    DigitsPPrint();
    return 0;
}