#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n=9996;

    string str=to_string(n);
    for(int i=0;i<str.length();i++)
    {

        if(str[i]=='6')
        {
            str[i]='9';
            break;
        }
    }
    cout<<str;

}
