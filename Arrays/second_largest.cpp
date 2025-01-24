#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
       int max = arr[0];
        int n = arr.size();
        int secl = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] > max){
                secl = max;
                max = arr[i];
            }
        }


        for(int i=0;i<n;i++){
            if(arr[i]< max && arr[i] > secl){
                secl = arr[i];
            }
        }
        return secl;
    }

    int getSecondSmallest(vector<int> &arr) {
       int max = arr[0];
        int n = arr.size();
        int secl = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] > max){
                secl = max;
                max = arr[i];
            }
        }


        for(int i=0;i<n;i++){
            if(arr[i]< max && arr[i] > secl){
                secl = arr[i];
            }
        }
        return secl;
    }


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getSecondLargest(arr);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "<<"\n";
    // }
}