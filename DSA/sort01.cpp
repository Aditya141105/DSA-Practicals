#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,0,0,0,0,1,0};
    int size=sizeof(a)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
            for(int j=size;j>i;j--)
            {
                if(a[j]==0)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
