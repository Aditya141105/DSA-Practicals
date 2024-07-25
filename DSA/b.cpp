#include<iostream>
using namespace std;
int main()
{

    int arr[7]={1,2,3,4,5,6,7};
    int key= 7;
    int start=0;
    int end=7;
    int mid;
    while(start<=end)
    {

        mid=(start+end)/2;
         if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }


    }
    return mid;
}
