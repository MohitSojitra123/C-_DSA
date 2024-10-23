#include<iostream>
using namespace std;

int main(){

   int row,col,sum=0;

   cout<<"Enter Row Size..."<<endl;
   cin>>row;
   cout<<"Enter Column Size..."<<endl;
   cin>>col;


    int array[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter Array Element..."<<" i "<< i <<" j "<<j<<endl;
            cin>>array[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
             if(((i==0) && (j>=0 && j<col)) ||((i==(col-1)) && (j>=0 && j<col))){
                sum+=array[j][i];
             }else if(((j==0) && (i>=1 && i<col))){
                sum+=array[j][i];
             }else if(((j==col-1) && (j>=1 && j<col))){
                sum+=array[j][i];
             } 
        }
        cout<<endl;
    }
    cout<<sum;
}