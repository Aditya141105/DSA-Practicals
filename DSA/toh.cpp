#include<iostream>
using namespace std;

void towerOfHanoi(int n,char source,char auxilary, char destination)
{
    if(n==1)
    {
        cout<<"Moving disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    }
    else
    {
        towerOfHanoi(n-1,source,destination,auxilary);
        cout<<"Moving disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        towerOfHanoi(n-1,auxilary,source,destination);
    }
}

int main()
{
    cout<<"Enter number of disk :";
    int n;
    cin>>n;

    towerOfHanoi(n,'A','B','C');
}
