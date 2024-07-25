#include<iostream>
using namespace std;
int pivat(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<end){
        mid=(start+end)/2;

        if(arr[0]<=arr[mid])
        {
            start=mid+1;
        }
        else
            end=mid;
    }
    return start;


}
int binary(int arr[],int s,int size,int key)
{
    int start=s;
    int end=size-1;
    int mid;
    while(start <= end)
    {
            mid=(end+start)/2;
        if(arr[mid]==key)
        {
            return mid;
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
    return -1;

}
int main()
{

    int arr[]={3,4,5,2};
    int size=sizeof(arr)/sizeof(int);

    int p=pivat(arr,size);
    cout<<p<<endl;

    int key=2;

    if(key>arr[p]&&arr[size-1]>key)
    {
        binary(arr,p,size,key);
    }
}
