#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={4,6,3,8,9};

    int arr1[5];
    int k=2;

    reverse(arr,arr+5-k);
    reverse(arr+5-k,arr+5);
    reverse(arr,arr+5);
    for(int j:arr)
    {
        cout<<j<<" ";
    }

}
