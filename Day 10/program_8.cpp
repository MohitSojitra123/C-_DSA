#include<iostream>
using namespace std;

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 - - 4 3 2 1
// 1 2 3 - - - - 3 2 1
// 1 2 - - - - - - 2 1
// 1 - - - - - - - - 1

int main(){

int user;
cout<<"Enter Rows Size...";
cin>>user;

for(int row=user; row>=1; row--){
    for(int col=1; col<=row; col++){
        cout<<col<<" ";
    }

    for(int space=row; space<user; space++){
        cout<<"- ";
    }

    for(int space=row; space<user; space++){
        cout<<"- ";
    }

    for(int col1=row; col1>=1; col1--){
        cout<<col1<<" ";
    }
       cout<<endl;
}

for(int row=1; row<=user; row++){
    for(int col=1; col<=row; col++){
        cout<<col<<" ";
    }

    for(int space=row; space<user; space++){
        cout<<"- ";
    }

    for(int space=row; space<user; space++){
        cout<<"- ";
    }

    for(int col1=row; col1>=1; col1--){
        cout<<col1<<" ";
    }
       cout<<endl;
}

}