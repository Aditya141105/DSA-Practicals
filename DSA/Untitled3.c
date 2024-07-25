#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int ans = 0, i = 0;

    while (n != 0)
    {
        int bit = n % 2 ^ 1; // Calculate the flipped bit
        ans = ans + bit * pow(10, i); // Add the flipped bit to the result
        i++; // Increment position
        n = n >> 1; // Shift right to process the next bit
    }

    cout << ans;
}
