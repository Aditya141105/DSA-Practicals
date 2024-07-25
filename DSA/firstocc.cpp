#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,3,3,3,3,3,3,3,3,3,4,5,6,7};
    int s=sizeof(arr)/sizeof(int);

    int ans=-1;

    int start=0;
    int end=s-1;
    int occ=(start+end)/2;
    int key=3;

    while(start<=end)
    {
        if(arr[occ]==key)
        {
            ans=occ;
            end=occ-1;
        }
        else if(arr[occ]>key)
        {
            end=occ-1;
        }
        else
        {
            start=occ+1;
        }
        occ=(start+end)/2;
    }
    cout<<ans;
}
