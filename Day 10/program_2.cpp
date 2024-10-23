#include<iostream>
using namespace std;


// - - - - 5 
// - - - 4 5 
// - - 3 4 5 
// - 2 3 4 5 
// 1 2 3 4 5 

int main(){

// for(int i=5; i>=1; i--){

//   for(int space=i; space>1; space--){
//     cout<<"- ";
//   }

//    for(int j=i; j<=5; j++){
//     cout<<j<<" ";
//    }
//     cout<<endl;
// }
   
   int user;
   cout<<"Enter Row Size...";
   cin>>user;


   for(int i=user; i>=1; i--){
    
    for(int space=i; space>1; space--){
        cout<<"- ";
    }

    for(int j=i; j<=user; j++){
        cout<<j<<" ";
    }
        cout<<endl;
   }

}