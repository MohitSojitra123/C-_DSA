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
                if (col <= user)
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
                else{
                    break;
                }
            }
        }
        else{break;}
            cout<<endl;
    }
}