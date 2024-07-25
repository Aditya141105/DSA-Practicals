#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int v[]={1,2,3,4,5,6};


    int n=6;
    int i=0;
    while(i<n/2)
    {
        int temp;
        temp=v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=temp;
        i++;
    }

    for(int j=0;j<n;j++)
    {
        cout<<v[j]<<" ";
    }
}
