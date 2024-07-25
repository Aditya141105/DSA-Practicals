#include<iostream>
using namespace std;

string reverse(string str,int temp,int count)
{
    int n=str.length();
    char aos[n];

    for(int k=temp;k<count;k++)
    {
        aos[k]=str[count-k-1];
    }
    return aos;
}

int main()
{
    string str1="my name is aditya";
    string og;
    int temp=0;
    int count=0;

    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]==' '||str1[i]=='\0')
        {
            og=reverse(str1,temp,count);
            temp=count;
        }
        else{
            count++;
        }
    }

    cout<<og;


}
