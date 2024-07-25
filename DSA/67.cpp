#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int x=a.length();
    int y=b.length();
    cout<<x<<endl<<y;
    string c;

    int sum=0;
    int carry=0;

    for(int i=x;i>0;i--)
    {
        if((a[i]&b[i]==1)&&carry==0)
        {
            sum=0,carry=1;
            c[i]='0';
        }
        else if((a[i]&b[i]==1)&&carry==1)
        {
            sum=1,carry=1;
            c[i]='1';
        }
         else if((a[i]^b[i]==1)&&carry==0)
        {
            sum=1,carry=0;
            c[i]='1';
        }
         else if((a[i]^b[i]==1)&&carry==1)
        {
            sum=0,carry=1;
            c[i]='0';
        }
         else if((a[i]=b[i]==0)&&carry==1)
        {
            sum=1,carry=0;
            c[i]='1';
        }
         else if((a[i]=b[i]==0)&&carry==0)
        {
            sum=0,carry=0;
            c[i]='0';
        }
        else
            cout<<"error";
    }

    cout<<endl;
    for(int i=0;i<x;i++)
    {

        cout<<c[i]<<endl;

    }
}
