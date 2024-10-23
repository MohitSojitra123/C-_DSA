#include<iostream>
using namespace std;

int main(){

   int sum=0,r,c;
   cout<<"Enter Row Size..."<<endl;
   cin>>r;
   cout<<"Enter Column Size..."<<endl;
   cin>>c;

   int array[r][c];

   for(int row=0; row<r; row++){
    for(int col=0; col<c; col++){
        cout<<"Enter Array Element..."<<endl;
        cin>>array[row][col];
    }
   }
   for(int row=0; row<r; row++){
    for(int col=0; col<c; col++){
        cout<<array[row][col]<<" ";
    }
        cout<<endl;
   }



   int row_count=0;
   int col_count=c-1;

   for(int row=0; row<r; row++){
    for(int col=c-1; col>=0; col--){
        if(row==row_count && col==col_count){
           row_count++; 
           col_count--;
         sum+=array[row][col];
        }
    }
      cout<<endl;
   }

   cout<<"Anti Diagnol Sum Is..."<<sum<<endl;


    

}