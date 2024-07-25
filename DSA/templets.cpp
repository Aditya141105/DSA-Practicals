#include<iostream>
using namespace std;

template<class T,class R>
class x{
    
    
    public:
    x(T w,R q)
    {
        cout<<w<<endl<<q;
    }
};
int main()
{
    x <int,char> ob1(5,'y');
return 0;
}