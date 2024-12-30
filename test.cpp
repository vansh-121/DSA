#include<iostream>
#include<string>
using namespace std;

int sum(int num){ // pass by value 
    num+=10;
    cout<<num<<endl;
}

int main(){
    int num = 50;
    sum(num);
    cout<<num<<endl;

}

