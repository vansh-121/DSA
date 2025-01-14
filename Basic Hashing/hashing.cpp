#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }



    int question;
    cin>>question;
    while(question--){
        int no;
        cin>>no;

        //fetch
        cout<<hash[no]<<endl;
    }
}