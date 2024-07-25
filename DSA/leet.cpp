#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
   cout<<"enter number";
   cin>>n;

   if(n<0)
   {
       return 0;
   }
   int i=0;
   while(i<=30)
   {
       if(n==pow(2,i))
       {
           return 1;
       }
       i++;
   }
   return 0;
}
