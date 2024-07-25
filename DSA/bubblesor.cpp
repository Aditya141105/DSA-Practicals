#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
        int a[6]={6,4,7,3,4,5};

    int n=6;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                swap(a[j],a[i]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
