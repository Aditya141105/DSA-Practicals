#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,3,5,4,6,7,4,5};
    int z=sizeof(arr)/sizeof(int);

    sort(arr,arr+z);
    int ans[2];
    int j=0;
    for(int i=1;i<z;i++)
    {
        if(arr[i]==arr[i-1])
        {
            ans[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<sizeof(ans)/sizeof(int);i++)

    {cout<<ans[i]<<" ";}
  /* for(int i=0;i<z;i++)
    {
        cout<<arr[i]<<" ";
    }
*/
}
