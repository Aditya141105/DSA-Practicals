#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 4, 0, 3, 0, 0};

    int i=0;
    for(int j=0;j<7;j++)
    {
        if(arr[j]==0)
        {

            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int k:arr)
    {
        cout<<k<<" ";
    }
}
