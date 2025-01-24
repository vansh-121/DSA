#include<bits/stdc++.h>
using namespace std;

int largestelement(vector<int> & arr){
    int n= arr.size();
    for(int i=0;i<n;i++){
        int swapdone = 0;
        for(int j =0;j<n-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapdone = 1;
            }
        }
        if(swapdone ==0){
            break;;
        }
        return arr[n-1];
        
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestelement(arr);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "<<"\n";
    // }
}