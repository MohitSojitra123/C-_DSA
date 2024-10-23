#include<iostream>
using namespace std;

int main(){

  int row,col,sum1=0,sum2=0;
  cout<<"Enter Array Row Size..."<<endl;
  cin>>row;
  cout<<"Enter Array Column Size..."<<endl;
  cin>>col;

  int array[row][col];

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<"Enter Array Element Index : "<<" Row " << row << " Col " << col<<endl;
        cin>>array[i][j];
    }
      cout<<endl;
  }


   for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
       cout<<array[i][j]<<" ";
    }
      cout<<endl;
  }

  if(row==col){
      

    for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
         if(i==j){
            sum1+=array[i][j];
         }
    }
      cout<<endl;
   }   

  }



  cout<<"Sum Of Diagnol..."<<sum1<<endl;


}