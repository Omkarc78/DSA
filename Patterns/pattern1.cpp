/*

    1*
   12**
  123***
 1234****

    */
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int p=5;p>i;p--)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<j+1;
        }
       
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}
