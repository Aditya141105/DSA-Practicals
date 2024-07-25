#include<iostream>
using namespace std;

int main()
{
    int arr1[6]={3,5,7,10,13,14};
    int arr2[3]={2,5,8};

    int arr[9];

    int i=0,j=0,k=0;

    while(i<6&&j<3)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
    }
    while(i<6)
    {
        arr[k++]=arr1[i++];
    }
    while(j<3)
    {
        arr[k++]=arr2[j++];
    }

    for(int u:arr)
    {
        cout<<u<<" ";
    }
}
