#include<iostream>
using namespace std;

string function(string str,int start,int end,string dump)
    {
        for(int k=start;k<end;k++)
        {
            dump+=str[k];
//            co++;
        }
        return dump;
    }



int main(){
    string str="my name is aditya";
    int temp=str.length();

     string dump = "";

    for(int i=str.length();i>=0;i--){
        if(str[i-1]==' '||i==0){
           dump=function(str,i,temp,dump);
                dump += ' ';
                 temp=i-1;

        }
    }
    cout<<dump;
}

