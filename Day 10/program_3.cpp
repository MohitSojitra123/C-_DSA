#include<iostream>
using namespace std;

// - - - - - - - - 9 
// - - - - - - - 8 8 
// - - - - - - 7 7 7 
// - - - - - 6 6 6 6 
// - - - - 5 5 5 5 5 
// - - - 4 4 4 4 4 4 
// - - 3 3 3 3 3 3 3 
// - 2 2 2 2 2 2 2 2 
// 1 1 1 1 1 1 1 1 1 



int main(){

 int user;
 cout<<"Enter Rows Values...";
 cin>>user;

for(int row=user; row>=1; row--){

     for(int space=row; space>1; space--){
           cout<<"- ";
     }

    for(int col=row; col<=user; col++){
        cout<<row<<" ";
    }
    cout<<endl;
}


}