#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of square matrix :";
    int n;
    cin>>n;
    int m=n;

    int arr[m][n];

    cout<<"Enter a value :"<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given matrix :";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpos of matrix
    cout<<"Transpos of matrix : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            swap(arr[i][j],arr[j][i]);

        }
       // cout<<endl;
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
