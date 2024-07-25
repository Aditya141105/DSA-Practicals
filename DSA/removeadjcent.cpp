#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="azxxzy";
    string ans="";

    if (!s.empty()) {
        ans.push_back(s[0]);
    }
    int k=0;

    for(int i=1;i<s.length();i++)
    {
        if(k>=0&&ans[k]==s[i])
        {
            ans.pop_back();
            k--;
        }
        else{
            ans.push_back(s[i]);
            k++;
        }
    }

    cout<<ans;

}
