#include<iostream>
using namespace std;

int main(){

  int array_size,user,update_index,update_value,insert_index,insert_value,delete_index;

  cout<<"Enter Array Size...";
  cin>>array_size;

  int array[array_size];

  for(int i=0; i<array_size; i++){
    cout<<"Enter Array Element "<<i<<endl;
    cin>>array[i];
  }
    cout<<"--------------------------"<<endl;


  do{

    cout<<"Enter Array Element...."<<endl;
    cout<<"1 Insert...."<<endl;
    cout<<"2 Update...."<<endl;
    cout<<"3 View...."<<endl;
    cout<<"4 Delete..."<<endl;
    cin>>user;
    cout<<"--------------------------"<<endl;

   switch(user){

    case 1:
     cout<<"Insert"<<endl;

     array_size=array_size+1;

     cout<<"Enter Array Index Number..."<<endl;
     cin>>insert_index;
     cout<<"Enter Array Insert New Value..."<<endl;
     cin>>insert_value;

     for(int i=array_size; i>insert_index; i--){
      array[i]=array[i-1];
     }

     array[insert_index]=insert_value;



     
    cout<<"--------------------------"<<endl;
     break;
    case 2:
     cout<<"Update"<<endl;
       
       cout<<"Enter Index Number To Change And Update Value...."<<endl;
       cin>>update_index;
       cout<<"Enter Update Value..."<<endl;
       cin>>update_value;

       array[update_index]=update_value;

    cout<<"--------------------------"<<endl;
     break;
    case 3:
      cout<<"View"<<endl;

     for(int i=0; i<array_size; i++){
        cout<<array[i]<<endl;
     }

    cout<<"--------------------------"<<endl;
     break;
    case 4:
      cout<<"Delete"<<endl;

      cout<<"Enter Index Number To Delete Element...."<<endl;
      cin>>delete_index;

     array_size=array_size-1;

      for(int i=delete_index; i<array_size; i++){
           array[i]=array[i+1];    
      }

    cout<<"--------------------------"<<endl;
     break;

   }

  }while(user!=0);

}