#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
void enqueue(int q[],int &n,int &rear,int &front)
{
    

     if(front==-1)
     {
        front=0;
     }
     if(rear==n-1)
     {
        cout<<"***************************"<<endl;
        cout<<"Queue is overflow :"<<endl;
        cout<<"***************************"<<endl;
     }
     else
           {
            
                cout<<"Enter element to enter :";
                rear++;
                cin>>q[rear];
           }
}
void display(int q[],int &front,int &rear)
{
    for(int i=front;i<rear+1;i++)
            {
                cout<<q[i]<<" ";
            }cout<<endl;
}
void dequeue(int q[],int n,int &front,int &rear)
{
    if(front==-1||front>rear)
    {
        cout<<"***************************"<<endl;
        cout<<"Queue is underflow :";
        cout<<"***************************"<<endl;
    }
    else if(rear>=front)
    {
     front=front+1;
     if(front>rear)
     {
        front=rear=-1;
     }
    }
}
int main()
{
    cout<<"Enter size of Simple queue :";
    int n;
    cin>>n;



    int* q=new int[n];
    int choice;
    do{
       cout<<"Enter 1 for enqueue "<<endl;
       cout<<"Enter 2 for dequeue "<<endl;
       cout<<"Enter 3 for diplay "<<endl;
       cout<<"Enter 4 for enqueue "<<endl;
       cout<<"***************************"<<endl;
       cin>>choice;
    cout<<"***************************"<<endl;
        switch (choice)
        {
        case 1:
        {
            enqueue(q,n,rear,front);
           break;
        }
        case 2 :
        {
            dequeue(q,n,front,rear);
            break;
        }
        case 3:
        {
            display(q,front,rear);
            cout<<"***************************"<<endl;
            break;
        }
        default :
        {
            cout<<"***************************"<<endl;
            cout<<"You entered wrong input :"<<endl;
            cout<<"***************************"<<endl;
            break;
        }

    }
}while(choice!=4);
}
