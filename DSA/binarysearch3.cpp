#include<iostream>
using namespace std;

string binary(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start <= end)
    {
            mid=(end+start)/2;
        if(arr[mid]==key)
        {
            return "found";
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return "not found";

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    int key=8;

    cout<<"After doing binary search :"<<binary(arr,size,key);
}
