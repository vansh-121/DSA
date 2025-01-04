#include<iostream>

using namespace std;

int countdigit(long long n){
    // cin>>n;
    int count = (int) log10(n) + 1;
    return count;
}

int main(){
    int n;
    countdigit(n);
    return 0;
}