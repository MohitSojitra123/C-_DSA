#include<iostream>
using namespace std;

// 6 5 4 3 2 1 
// - 6 5 4 3 2 
// - - 6 5 4 3 
// - - - 6 5 4 
// - - - - 6 5 
// - - - - - 6 

int main(){

    int user;
    cout<<"Enter Valuess of Row...";
    cin>>user;

    for(int row=1; row<=user; row++){

        for(int space=row; space>1; space--){
            cout<<"- ";
        }

        for(int col=user; col>=row; col--){
             cout<<col<<" ";
        }
            cout<<endl;
    }
}