#include<iostream>
using namespace std;

int main(){
    int salary;
    float HAR,DA,TA;

    cout<<"Enter Salary..."<<endl;
    cin>>salary;
    cout<<"Enter HAR"<<endl;
    cin>>HAR;
    cout<<"Enter DA"<<endl;
    cin>>DA;
    cout<<"Enter TA"<<endl;
    cin>>TA;

    HAR=HAR*salary/100;
    DA=DA*salary/100;
    TA=TA*salary/100;

    cout<<"Gross Salary Is..."<<HAR+DA+TA+salary;

}