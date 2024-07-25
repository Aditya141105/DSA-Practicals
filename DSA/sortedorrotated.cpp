#include<iostream>
#include<algorithm>
#include <array>
using namespace std;
int main()
{
    int arr[]={1,1,1};
    int n=sizeof(arr)/sizeof(int);

    int count;

    int i;

    for(i=1;i<n-1;i++)
    {
        if(arr[i-1]>arr[i])
        {
            count++;

        }
    }
    if(arr[i]>xarr[0])
    {
        count++;
    }
    cout<<count;
}
