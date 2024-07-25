#include<iostream>
using namespace std;
void ncr(int n,int r)
{
    int temp1=1,temp2=1;
    int l=n-r;
    while(n)
    {
      temp1=temp1*n;
      n=n-1;

    }
     while(r)
    {
      temp2=temp2*r;
      r=r-1;
    }
    int temp3=1;

    while(l)
    {
      temp3=temp3*l;
      l--;
    }
    int ans;
    cout<<temp1<<endl<<temp2<<endl<<temp3<<endl;
    ans=temp1/(temp2*temp3);
    cout<<ans;
}
int main()

{
    int n,r;
    cout<<"Enter value of n :"<<endl;
    cin>>n;
    cout<<"Enter value of r :"<<endl;
    cin>>r;

        ncr(n,r);
}
