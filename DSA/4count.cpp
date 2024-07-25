#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter value of n :";
    cin>>n;
    cout<<endl;


    int c=0;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        int x;

        while(k!=0)
        {
            x=k%10;
            if(x==4)
            {
                c++;
                break;
            }
            k=k/10;
        }
    }

    cout<<c;
}
