#include<iostream>
using namespace std;

int top=-1;
int fleg=0;
int count=0;
//for pushing element
void push(int stack[],int n)
{
    if(top==n)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        int x;
        cout<<"Enter an element :";
        cin>>x;
        top++;
        stack[top]=x;
        fleg=1;
    }
}
//for display an elements

void display(int stack[])
{
    if(top==-1)
    {
        cout<<"no element present in Stack"<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
//for poping the element
void pop(int stack[])
{
    if(top==-1)
    {
        cout<<"nothing to pop "<<endl;

    }
    else
    {
        cout<<"poped element is :"<<stack[top]<<endl;
        top--;
        fleg=2;
        if(top==-1)
        {
            cout<<"stack is empty "<<endl;
        }
        else
        cout<<"new top is :"<<stack[top]<<endl;
    }
}

void undo(int stack[])
{
    if(fleg==1)
    {
        cout<<"pushed item removed "<<endl;
        top--;
        fleg=3;
        count++;
    }
    if(fleg==2)
    {
        cout<<"poped item is recovered "<<endl;
        top++;
        fleg=4;
        count++;
    }
}

void redo(int stack[])
{
    if(count>0&&fleg==3)
    {
        cout<<"Removed item recovered :"<<endl;
        top++;
        count--;
    }
    else if(count>0&&fleg==4)
    {
        cout<<"recovered item removed :"<<endl;
        top--;
        count--;
    }
    else
    {
        cout<<"Nothing to redo :"<<endl;
    }
}

int main()
{
    cout<<"Enter size of stack :";
    int size;
    cin>>size;

    int stack[size];

    int n=size-1;

    int choice;

    do
    {
        cout<<"*************************************"<<endl;
        cout<<"Enter 1 for push element "<<endl;
        cout<<"Enter 2 for pop element "<<endl;
        cout<<"Enter 3 for dispay elements "<<endl;
        cout<<"Enter 4 for undo element "<<endl;
        cout<<"Enter 5 for redo element "<<endl;
        cout<<"Enter 6 for exit element "<<endl;
        cin>>choice;
        cout<<"*************************************"<<endl;

        if(choice==1)
        {
            cout<<"*************************************"<<endl;
            push(stack,n);
            cout<<"*************************************"<<endl;
        }
        if(choice==2)
        {
            cout<<"*************************************"<<endl;
            pop(stack);
            cout<<"*************************************"<<endl;
        }
        if(choice==3)
        {
            cout<<"*************************************"<<endl;
            display(stack);
            cout<<"*************************************"<<endl;
        }
        if(choice==4)
        {
            cout<<"*************************************"<<endl;
            undo(stack);
            cout<<"*************************************"<<endl;
        }
        if(choice==5)
        {
            cout<<"*************************************"<<endl;
            redo(stack);
            cout<<"*************************************"<<endl;
        }


    }while(choice!=6);

}
