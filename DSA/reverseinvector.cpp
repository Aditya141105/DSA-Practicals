#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);

        s++;
        e--;

    }
    return v;
}

int main()
{
    vector<int > v;
    v.push_back(11);
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);


    vector <int > ans= reverse(v);

    for(int i:ans)
    {
        cout<<i<<" ";
    }
    
}