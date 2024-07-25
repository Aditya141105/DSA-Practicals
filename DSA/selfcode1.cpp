#include<iostream>
using namespace std;
int main()
{
    int s,e;
    cout<<"Enter a starting number :";
    cin>>s;
    cout<<"Enter a ending number :";
    cin>>e;
    int k=e-s/2;
    int odd[k];
    int even[k];
    int count=0;
    if(s%2==0)
    {
        for(int i=s;i<e-s;i+2)
        {
        odd[count]=i+1;
        even[count]=i+2;
        count++;
        cout<<"run";
        }
    }
    else
    {
        for(int i=s;i<e-s;i+2)
        {
            odd[count]=i+2;
            even[count]=i+1;
            count++;
            cout<<"run1"<<endl;
        }
    }
    cout<<"ODD :"<<endl;
    for(int i=0;i<(e-s)/2;i++)
    {
        cout<<"run2"<<endl;
        cout<<odd[i]<<",";
    }
    cout<<endl;
    cout<<"EVEN :"<<endl;
    for(int i=0;i<(e-s)/2;i++)
    {
        cout<<"run3"<<endl;
        cout<<even[i]<<",";
    }

}
