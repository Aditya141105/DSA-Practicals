#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,7,9,9,7,4};

    int z=sizeof(arr)/sizeof(int);
    cout<<z<<endl;



    int max=INT_MIN;
    for(int i=0;i<z;i++)
    {
        for(int j=i+1;j<z;j++)
        {
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
    int ans;
    for(int i=0;i<z;i++)
    {
        if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1])
        {
             ans=arr[i];
        }
    }
    cout<<ans;
   /* for(int i=0;i<z;i++)
    {
        cout<<arr[i]<<" ";
    }
*/
}
