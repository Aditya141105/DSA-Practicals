#include<iostream>
using namespace std;
void enqueue(int cq[],int n,int &front,int &rear)
{
    if((rear==n-1&&front==0)||(front>=rear-1))
    {
        cout<<"Stack is overflow";
    }

    if(front==-1)
    {
        front=0;
    }

    else if(front==0&&rear!=n-1)
    {
        rear=rear+1;
        cout<<"Enter a element :";
        cin>>cq[rear];
    }
}
int main()
{
    cout<<"Enter size of circular queue :";
    int n;
    cin>>n;
    int *cq=new int[n];
    int choice;
    int front=-1;
    int rear=-1;

    do{
        cout<<"Enter 1 for enqueue "<<endl;
       cout<<"Enter 2 for dequeue "<<endl;
       cout<<"Enter 3 for diplay "<<endl;
       cout<<"Enter 4 for exit "<<endl;
       cout<<"***************************"<<endl;
       cin>>choice;

        switch (choice)
        {
        case 1:
        {
            enqueue(cq,n,front,rear);
            break;
        }
        
        default:
            break;
        }

    }while(choice!=4);

}
