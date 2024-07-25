#include<iostream>
#include <algorithm>
using namespace std;
int main()

{


    string s;
    getline(cin,s);
    cout<<s<<endl;

    int x=s.length();

    reverse(s.begin(),s.end());
    cout<<s<<endl;


    int k=0;
    while(s[k]==' ')
    {
        ++k;
    }
    int i=0;
    while(s[k]!=' ')
    {
        ++i;
        ++k;
    }
    cout<<i;

}
