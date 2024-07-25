#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={9,9};
    vector <int> v;


    int carry=0;
    int sum;

    int i=(sizeof(arr1)/4)-1;
    int j=(sizeof(arr2)/4)-1;

    while(i>=0&&j>=0)
    {
        sum=arr1[i]+arr2[j]+carry;

        carry=sum/10;
        sum=sum%10;
        v.push_back(sum);
        i--;
        j--;
    }

    while(i>=0)
    {
        sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        v.push_back(sum);
        i--;
    }


    if (carry > 0)
    {
        v.push_back(carry);
    }
    reverse(v.begin(),v.end());
    for(int k=0;k<v.size();k++)
    {
        cout<<v[k]<<" ";
    }

}
