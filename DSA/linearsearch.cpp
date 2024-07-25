#include<iostream>
using namespace std;
int main()

{

    cout<<"Enter the size of an array :";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter a num of it : "<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<<"Enter a digit you want to found :";
    int s;
    cin>>s;
int i;
     for(i=0;i<n;i++)
    {
        if(s==arr[i])
            {cout<<"found!!";
            break;}
    }
    if(i==n)
        cout<<"Not found!";

}
