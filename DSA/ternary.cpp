#include<iostream>
using namespace std;
int main()

{

    int a[8]={1,2,3,4,5,6,7,8};
    int s=0;
    int e=8;
    int key=5;
    int mid1=(s+e)/3;
    int mid2=2*(s+e)/3;

    while(s<=e)
    {

        if(key==a[mid1]||key==a[mid2])
        {
            cout<<"found!!";
            break;
        }
        if(key>a[s]&&key<a[mid1])
        {
            e=mid1-1;
        }
        if(key>a[mid1]&&key<a[mid2])
        {
            s=mid1+1;
            e=mid2-1;
        }
        if(key>a[mid2]&&key<e)
        {
            s=mid2+1;
        }
        mid1=(s+e)/3;
        mid2=2*(s+e)/3;
    }
}
