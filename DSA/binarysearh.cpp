#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,3,4,8,9};
    int size=5;

    int start=0;

    int end=size-1;
    int mid=(start+end)/2;
    int key=8;
    while(start<=end)
    {
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

        mid=(start+end)/2;
    }
    return mid;
}
