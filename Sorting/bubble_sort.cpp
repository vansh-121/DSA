#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> & arr)
{
    int i;
    int n = arr.size();
    int j;
    for(i=0; i<=n-1;i++){
        int swapdone = 0;
        for(j=0; j<n-1;j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
                swapdone =1;
            }
        }
            if(swapdone==0){
                break;
            }
           
    }
}


int main(){
    int n;
    cin>>n;
    
    
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}