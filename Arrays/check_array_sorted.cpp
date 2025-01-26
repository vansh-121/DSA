#include<bits/stdc++.h>
using namespace std;

bool checkArraySorted(vector<int> & arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>= arr[i-1]){
            // return true;
        }
        else {
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<checkArraySorted(arr);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "<<"\n";
    // }
}