#include<iostream>
using namespace std;

int main(){
    int user;
    cout<<"Enter Any Number..."<<endl;
    cin>>user;
    
    int fact=1;
    for(int i=1; i<=user; i++){
       fact=fact*i;
    }

    cout<<"Factorial Number Is..."<<fact<<endl;
}