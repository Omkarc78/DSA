#include<iostream>
using namespace std;
int reverse(int a[],int s)
{
    int start=0;
    int end=s-1;
    while(start<=end)
    {
        // int temp=a[start];
        // a[start]=a[end];
        // a[end]=temp;
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
int main()
{
    int a[10];
    int size;
    cout<<"Enter size of array ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];

    }
    reverse(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}