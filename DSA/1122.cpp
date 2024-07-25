#include<iostream>
using namespace std;
int main()
{
    int arr1[]={2,3,1,3,2,4,6,7,9,2,19};
    int arr2[]={2,1,4,3,9,6};

    int a=sizeof(arr1)/sizeof(int);
    int b=sizeof(arr2)/sizeof(int);

    int k=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(arr2[i]==arr1[j])
            {
                swap(arr1[k],arr1[j]);
                ++k;
            }
        }
    }

    cout<<k;
    /*for(int i=0;i<a;i++)
    {
        cout<<arr1[i]<<" ";
    }
        */
}
