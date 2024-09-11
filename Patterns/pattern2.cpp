/*

   *
  ***
 *****
 
*/
#include<iostream>
using namespace std;
int main()
{
    int p=0;
    for(int i=1;i<=5;i+=2)
    {
        for(int k=5;k>=p;k--)
        {
            cout<<" ";
            p++;
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
