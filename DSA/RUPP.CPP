#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter ruppes :";
    cin>>n;
int k=0,l=0,m=0,N=0;
    /*if(n/100)
    {

        k=n/100;
        n=n-k*100;
    }
    if(n/50)
    {

        l=n/50;
        n=n-l*50;

    }
    if(n/20)
    {

        m=n/20;
        n=n-m*20;
    }
    if(n/10)
    {
        N=n/10;
        n=n-N*10;
    }
    int r=n;
    cout<<endl;

    cout<<"100rs. :"<<k<<endl<<"50's :"<<l<<endl<<"20's :"<<m<<endl<<"10's :"<<N<<endl<<"1's :"<<r<<endl ;
*/
    switch(n)
        case(n/100>=0):
        {
          k=n/100;
        n=n-k*100;
        }
}
