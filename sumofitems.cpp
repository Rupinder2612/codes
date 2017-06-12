#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100];
    int sum=0;
    cout<<"Enter no of items";
    cin>>n;
    cout<<"ENter price of every item";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"total price of items is "<<sum;
}
