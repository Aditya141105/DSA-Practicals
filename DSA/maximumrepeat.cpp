#include<iostream>
using namespace std;



char maximumrepeted(string s,int n)
{
    int alph[26]={0};

    for(int i=0;i<n;i++){
        int number=s[i]-'a';
        alph[number]++;
    }
        int maxi=0;
        int ans=-1;
    for(int i=0;i<26;i++)
    {
        if(maxi<alph[i])
            {maxi=alph[i];
            ans=i;}

    }
    return 'a'+ans;

}

int main()
{
    cout<<"Enter a string :";
    string s;
    getline(cin,s);
    int n=s.length();
    cout<<n<<endl;


    char c=maximumrepeted(s,n);

    cout<<"Maximum repated word is :"<<c;
}
