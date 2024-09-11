#include<iostream>
using namespace std;
int sum1(int b[])
{
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s+b[i];
        
    }
    return s;
}
int main()
{
    int a[5];
    cout<<"Enter array elements ";
    for(int i=0;i<5;i++)
    {
    cin>>a[i];
    }
    cout<<sum1(a);

    return 0;
}