#include<iostream>
using namespace std;

// 0 1 0 1 0 1 0 1 0 1
// - 1 0 1 0 1 0 1 0 1
// - - 0 1 0 1 0 1 0 1
// - - - 1 0 1 0 1 0 1
// - - - - 0 1 0 1 0 1
// - - - - - 1 0 1 0 1
// - - - - - - 0 1 0 1
// - - - - - - - 1 0 1
// - - - - - - - - 0 1
// - - - - - - - - - 1

int main(){
    int user;
    cout<<"Enter Value Of Rows...";
    cin>>user;

    for(int row=user; row>=1; row--){

          for(int space =row; space<user; space++){
              cout<<"- ";
          }

          for(int col=row; col>=1; col--){
             cout<<col<<" ";
          }
           cout<<endl;
    }
}