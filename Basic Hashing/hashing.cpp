#include<iostream>
#include<vector>
using namespace std;

int hashh[10000000000000000];

int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    for(int i=0;i<n;i++){
        hashh[arr[i]] +=1;
    }



    int question;
    cin>>question;
    while(question--){
        int no;
        cin>>no;

        //fetch
        cout<<hashh[no]<<endl;
    }
}