#include<iostream>
using namespace std;
int main()
{
   int arr[]={0,1,2,2,1,0};
   int n=sizeof(arr)/sizeof(int);

int a=0,b=0,c=0;

   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      {
          cout<<"count 0"<<endl;
         a++;
      }
       if(arr[i]==1)
      {
          cout<<"count 1"<<endl;
         b++;
      }
       if(arr[i]==2)
      {
          cout<<"count 2"<<endl;
         c++;
      }
   }
    cout<<a<<endl<<b<<endl<<c<<endl;
   /*for(int i=0;i<a;i++)
   {
      arr[i]=0;
   }
   for(int i=a;i<a+b;i++)
   {
      arr[i]=1;
   }
   for(int i=a+b;i<a+b+c;i++)
   {
      arr[i]=2;
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }*/

   for(int i=0;i<n;i++)
   {
       if(i<a)
       {
           arr[i]=0;
       }
      else if(i<a+b)
       {
           arr[i]=1;
       }
       else
       {
           arr[i]=2;
       }

   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
