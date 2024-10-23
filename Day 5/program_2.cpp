#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter Value of a"<<endl;
    cin>>a;

    if(a>0){
        cout<<"The Number Is Positive..."<<a;
    }else if(a==0){
        cout<<"The Number Is Neutral..."<<a;
    }else{
        cout<<"The Number Is Nagative..."<<a;
    }
}