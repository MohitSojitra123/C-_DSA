#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=200;

    int temp=a;
    a=b;
    b=temp;

    cout<<"Value Of a...."<<a<<endl;
    cout<<"Value Of b...."<<b<<endl;
}