#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100];
    cout<<"Enter no of elements";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
            a[0]=a[i];
    }
    cout<<a[0];
}
