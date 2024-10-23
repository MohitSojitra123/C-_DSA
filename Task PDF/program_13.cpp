#include<iostream>
using namespace std;

int main(){
    int user,count=0;

    cout<<"Enter Value Of N...";
    cin>>user;
    

    for(int i=1; i<=user; i++){
      count=count+i;
    }

    cout<<count;
}