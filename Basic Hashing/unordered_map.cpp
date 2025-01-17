#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    //precompute

    unordered_map<int,int> mpp;
    for(int i=0;i<=n;i++){
        mpp[arr[i]]++;
    }

    //iterate in the map
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }




    int q;
    cin>>q;
    while(q--){
        int no;
        cin>>no;
        //fetch
        cout<<mpp[no]<<endl;
    }
}