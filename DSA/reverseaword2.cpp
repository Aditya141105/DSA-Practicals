#include<iostream>
using namespace std;

string reverse(string str,int start,int end){

    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;

}


int main()
{
        string str="my name is aditya";

        int temp=0;
        int count=0;

        for(int i=0;i<=str.length();i++){
            if(str[i]==' '||i==str.length()){
                str=reverse(str,temp,i-1);
                temp=i+1;
            }
        }

        cout<<str;

}
