#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void q1(){
    int a,n,X;
    int arr[9] = {1,4,4,4,4,9,9,10,11};
    int ind = lower_bound(a,a+n,X)-a;
    if(ind!=n && a[ind]==X){
        cout<<ind;
    }
    else cout<<-1;

}

int main(){
    q1();
}