#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter a number :";
    int c;
    cin>>c;



     long long int left = 0;
        long long int right = static_cast<long long>(sqrt(c));

        while (left <= right) {
            long long int currentSum = left * left + right * right;
            if (currentSum == c) {
                return true;
            } else if (currentSum < c) {
                left++;
            } else {
                right--;
            }
        }
        return false;
}
