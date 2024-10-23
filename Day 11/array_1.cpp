#include<iostream>
using namespace std;

int main(){

   int array_len;

   cout<<"Enter Array Size...";
   cin>>array_len;

   int array_1[array_len],array_2[array_len],array_3[array_len];

   for(int i=0; i<array_len; i++){
     cout<<"Enter Array1 Element.."<<i<<endl;
     cin>>array_1[i];
   }

    cout<<"-----------------------------------"<<endl;


   for(int i=0; i<array_len; i++){
     cout<<"Enter Array2 Element.."<<i<<endl;
     cin>>array_2[i];
   }

   for(int j=0; j<array_len; j++){
       array_3[j]=array_1[j]+array_2[j];
   }

    cout<<"-----------------------------------"<<endl;
 
    for(int i=0; i<array_len; i++){
        cout<<"array1 : "<<array_1[i]<<"  + "<<" array2 :  "<<array_2[i]<<" = "<<array_3[i]<<endl;
    }
   


}