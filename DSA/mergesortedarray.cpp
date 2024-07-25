#include<iostream>
using namespace std;
int main()
{

    int arr1[5]={3,5,7,9,10};
    int arr2[5]={4,6,8,11,13};
    int arr[10];
    int x=0,y=0;
    for(int i=0;i<8;i++)
    {
        if(arr1[x]>arr2[y])
        {
            arr[i]=arr2[y];
            y++;
        }
        else
        {
            arr[i]=arr1[x];
            x++;
        }
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
