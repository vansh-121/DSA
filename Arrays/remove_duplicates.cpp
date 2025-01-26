#include<bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int index = 0;
        int n = nums.size();
        if (n == 0) return 0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            nums[index++] = it;
        }
    return index;
    }


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<removeDuplicates(arr);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}