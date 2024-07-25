#include<iostream>
using namespace std;
int main(){

    int arr[6]={5,2,6,3,4,8};
    int i,j,n=6;
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
                break;
        }
        arr[j+1]=temp;
    }
    for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
}
