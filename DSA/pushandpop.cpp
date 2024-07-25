#include<iostream>
using namespace std;

void display(int arr[],int &top)
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"the element in stack is :"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void push(int arr[],int s,int x,int &top)
{

    if(top==s)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        top++;
        arr[top]=x;
        }

}
void pop(int arr[],int &top)
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else{
        int y=arr[top];
        cout<<"poped item is :"<<y<<endl;
        top--;
        cout<<"new top is : "<<arr[top]<<endl;

    }
}

void undo(int arr[],int temp[],int &top,int &top1)
{
    if(top1==-1)
    {
        cout<<"Nothing to undo"<<endl;
    }
}

int main(){
    int top=-1;
    int top1=-1;
    cout<<"enter size of array :";
    int s;
    cin>>s;
    int size=s-1;

    int temp[s];
    int arr[s];
    int choice;
    cout<<"*********************"<<endl;
     cout<<"enter choice :"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"5.undo"<<endl;
        cin>>choice;
    while(choice!=4)
    {
            switch(choice)
            {
                case 1:
                cout<<"enter element to push :"<<endl;
                int x;
                cin>>x;
                push(arr,size,x,top);
                break;

                case 2:
                pop(arr,top);
                break;

                case 3:
                display(arr,top);
                break;

                case 5:
                undo(arr,temp,top,top1);
            }
        cout<<"*********************"<<endl;
         cout<<"enter choice :"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"5.undo"<<endl;
        cin>>choice;
         cout<<"*********************"<<endl;
    }

return 0;

}
