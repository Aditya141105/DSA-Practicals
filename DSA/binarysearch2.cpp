#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
        int a[]={1,3,4,8,9};
        int s=sizeof(a)/sizeof(int);
        sort(a,a+s);
        //searching for key;

        int key=8;

        int start;
        int end=s-1;
        int mid=(start+end)/2;

        while(start<=end)
        {
            if(key==a[mid])
            {
                return mid;
            }
            else if(key>a[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return -1;
}
