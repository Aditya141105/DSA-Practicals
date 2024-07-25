#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,4,4,3};

    int z=sizeof(a)/sizeof(int);
    int u=0;
    for(int i=0;i<z;i++)
    {
        u=u^a[i];
    }
    cout<<u;
}
