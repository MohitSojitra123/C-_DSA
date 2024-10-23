#include<iostream>
using namespace std;

int main(){

// - - - - 1 
// - - - 2 1
// - - 3 2 1
// - 4 3 2 1
// 5 4 3 2 1


//    for(int row=1; row<=5; row++){
    
//      for(int space=5; space>row; space--){
//         cout<<"- ";
//      }

//     for(int col=row; col>=1; col--){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//    }

     int user;
     cout<<"Enter Any Number....";
     cin>>user;


     for(int row=1; row<=user; row++){

          for(int space=user; space>row; space--){
            cout<<"- ";
          }

        for(int col=row; col>=1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
     }



}