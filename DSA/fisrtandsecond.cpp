#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(end+start)/2;
    int ans;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=(end+start)/2;
    }
    return ans;

}
int lastocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(end+start)/2;
    int ans;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=(end+start)/2;
            }
    return ans;

}
int main()
{
    int arr[]={1,3,3,3,3,3,3,3,5,6,7};
    int size=sizeof(arr)/sizeof(int);

    int key=3;

    int s=firstocc(arr,size,key);
    int e=lastocc(arr,size,key);

    cout<<"key is repeating "<<e-s<<" times";

}
