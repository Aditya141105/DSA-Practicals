#include<iostream>
#include <string>
using namespace std;

int main()
{
    string str="0000";
    int cnt=0;
    for(int i = 1; i<str.length() ; i=i+2)
    {
        if(str[i]=='0')
        {
            if(str[i-1]!='1')
            {
                str[i-1]='1';
                cnt++;
            }
            if(i+1 < str.length() && str[i+1]!='1')
            {
                str[i+1]='1';
                cnt++;
            }
            if(i+2 < str.length() && str[i+2]!='0')
            {
                str[i+2]='0';
            }
        }

        if(str[i]=='1')
        {
            if(str[i-1]!='0')
            {
                str[i-1]='0';
                cnt++;
            }
            if(i+1 < str.length() && str[i+1]!='0')
            {
                str[i+1]='0';
                cnt++;
            }
             if(i+2 < str.length() && str[i+2]!='1')
            {
                str[i+2]='1';
            }
        }
    }
   cout<<cnt;
}
