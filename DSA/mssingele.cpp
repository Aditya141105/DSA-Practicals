#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int missingNumber(int n, vector<int>& arr) {

        for(int i=0;i<n;i++)
        {
            if(arr[i]!=(i+1))
            {
            return (i+1);
            }
        }

        // Your code goes here
    }
int main()
{
    vector<int> arr={1,2,3,5};
    int n=arr.size();
    missingNumber(n,arr);
}
