#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="A man, a plan, a canal: Panama";


    int i=0;
        int n=s.length();
    while(i<n)
    {
        //int ch=s[i];
        if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            i++;
            }

             else if ((s[i]<'a'||s[i]>'z')&&(s[i]<'0'||s[i]>'9'))
             {
                s.erase(i, 1);
                n--;
            }
            else{
                i++;
            }

    }

     string s1=s;

    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    cout<<s;
        if(s1==s)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


}
