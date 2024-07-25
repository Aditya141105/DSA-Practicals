#include<iostream>
using namespace std;

int pivetele(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid;

    while (end>start)
    {
        mid=(end+start)/2;

        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }

    }
    return arr[start];
}

int main()
{
  int arr[]={6,7,8,9,2,3,4};
  int size=sizeof(arr)/sizeof(int);

  cout<<"pivet element is : "<<pivetele(arr,size);

}
