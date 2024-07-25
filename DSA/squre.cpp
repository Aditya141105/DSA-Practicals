#include<iostream>
using namespace std;
int squreroot(int n)
{
    int start=0;
    int end=n;
    int ans=-1;
    int mid=(start+end)/2;

    while(start<=end)
    {


        int squre=mid*mid;
        if(squre==n)
        {
            return mid;
        }
        if(squre>n)
        {

            end=mid-1;n
        }
        else
        {
            ans=mid;
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;

}

int main()
{
    cout<<"Enter value of n";
    int n;
    cin>>n;

    cout<<"Ans is :"<<squreroot(n);

}
