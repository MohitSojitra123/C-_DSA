// #include <iostream>
// using namespace std;

// int main()
// {

//     // int user,counter=1;

//     // cout<<"Enter Row Size...";
//     // cin>>user;

//     // for(int row=1; row<=user; row++){
//     //     for(int col=1; col<=row; col++){
//     //         cout<<counter<<" ";
//     //         counter++;
//     //     }
//     //     cout<<endl;
//     // }

//     int user, counter = 1;
//     cout << "Enter Row Size...";
//     cin >> user;

//     for (int row = 1; row <= 1000; row++)
//     {
//         if (row <= counter)
//         {
//             for (int col = 1; col <= row; col++)
//             {
//                 if (user < counter)
//                 {
//                     break;
//                 }
//                 else
//                 {
//                     cout << counter << " ";
//                     counter++;
//                 }
//             }
//         }
//         else
//         {
//             break;
//         }
//         cout << endl;
//     }
// }


#include <iostream>

using namespace std;

int main()
{

    int user, count = 1;
    cout<<"please enter the value";
    cin>>user;
    for (int row = 1; row <= 10000000; row++)
    {
        if (count <= user)
        {
            for (int col = 1; col <= row; col++)
            {
               
                    if (count > user)
                    {
                        break;
                    }
                    else
                    {
                        cout <<count <<" ";
                        count++;
                    }

            }
        }
          else{
            break;
            }
            cout<<endl;
    }
}