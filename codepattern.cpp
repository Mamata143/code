#include<iostream>
using namespace std;

int main()
{
     for(int j=0;j<7;j++)
    {
    for(int k=1;k<=20+j;k++)
    {
        cout<<" ";
    }
   for(int i=j+1;i<=7;i++)
        {
       cout<<i<<" ";
        }
        cout<<endl;
    }

  int t=6;

   for(int j=1;j<=6;j++)
     {
         for(int k=1;k<=26-j;k++)
         {
             cout<<" ";
         }
         for(int i=t;i<=7;i++)
         {
             cout<<i<<" ";
         }


         cout<<endl;

    t=t-1;
     }
         return 0;

}





