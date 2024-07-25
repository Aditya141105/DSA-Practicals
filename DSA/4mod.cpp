#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        int num = i;
        while(num > 0)
        {-
            int digit = num % 10;
            if(digit == 4)
            {
                count++;
                break; // Remove this if you want to count all '4's in all numbers
            }
            num = num / 10;
        }
    }

    cout << "Count of numbers containing digit 4: " << count << endl;

    return 0;
}
