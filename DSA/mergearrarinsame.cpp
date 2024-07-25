#include<iostream>
#include<vector>
using namespace std;

vector<int> sorting(vector<int> v1,vector<int> v2,int m,int n)
{

    vector<int > v3;
    int i=0;
    int j=0;
    int k=0;
    while(i<m&&j<n)
    {
        if(v([i]<v2[j])
           {
               v3[k++]=v1[i++];
           }
        else if(v1([i]>v2[j])
           {
               v3[k++]=v2[j++];
           }

    }

    while(i<m)
    {
        v3[k++]=v1[i++];

    }
    while(j<n)
    {
        v3[k++]=v2[j++];

    }
    return v3;
}




int main()
{
    vector<int> v1={5,6,8,9};
    vector<int> v2={2,4,5,11,60};

    int m=v1.size();
    int n=v2.size();

    cout<<m<<" "<<n;

    vector<int> v3=sorting(v1,v2,m,n);
    for(int l:v3)
    {
        cout<<i<<" ";
    }
}
