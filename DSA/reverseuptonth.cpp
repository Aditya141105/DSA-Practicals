#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v,int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(2);
    v.push_back(5);
    v.push_back(90);
    v.push_back(12);
    v.push_back(67);
    v.push_back(88);

    cout<<"Enter number :";
    int n;
    cin>>n;

   vector<int> ans= reverse(v,n);

   for(int i:ans)
   {
    cout<<i<<" ";
   }

}
