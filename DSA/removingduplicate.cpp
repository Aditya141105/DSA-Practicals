#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,4,5,5};

    int z=sizeof(arr)/sizeof(int);

    sort(arr,arr+z);

    int count=z;

     for(int i=1;i<z;i++)
    {
        if(arr[i]!=arr[i-1])
        cout<<arr[i-1]<<" ";
    }
    /*for(int i=1;i<z;i++)
    {
        if(arr[i]==arr[i-1])
        {
            arr[i]=arr[i]^arr[i-1];
            count--;
        }
    }
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
    */
}

