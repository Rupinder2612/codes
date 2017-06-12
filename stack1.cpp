#include<iostream>
using namespace std;
class stack
{
    int *a;
    int size;
    int top;
public:
    void input()
    {
        cout<<"Input size of array";
        cin>>size;
        a=new int[size];
        //cout<<"Input array";
        for(int i=0;i<size;i++)
        {
          a[i]=0;
        }
        top=-1;
    }
    int isFULL()
    {
        if(top==size-1)
            return 1;
        else
            return 0;
    }
    int isEMPTY()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int pop()
    {
        int t;
        if(isEMPTY())
        {
            cout<<"stack is empty";
        }
        else
        {
            t=a[top];
            top=top-1;
        }
        return t;
    }
    void push(int data)
    {
        if(isFULL())
        {
            cout<<"Stack is full";
        }
        else
        {
            top=top+1;
            a[top]=data;
        }
    }
    void print()
    {
        for(int j=0;j<size;j++)
        {
            cout<<a[j]<<endl;
        }
    }

};
int main()
{
    stack obj;
    obj.input();
    obj.push(10);
    obj.push(11);
    obj.push(12);
    obj.push(13);
    obj.push(14);
    obj.push(15);
    obj.push(16);
    obj.print();
    cout<<"pop"<<" "<<obj.pop()<<endl;
}
