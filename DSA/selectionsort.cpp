#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[6]={6,4,7,3,4,5};

    int n=6;
    int j;
    int minidex;
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[minindex]>a[j])
                minindex=j;
        }
        swap(a[minindex],a[i]);
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
