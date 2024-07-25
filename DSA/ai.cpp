#include <iostream>
#include <string>
#include <algorithm> // for std::max

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Find the maximum length of the strings to iterate correctly
    int maxLength = max(a.length(), b.length());

    // Initialize a result string to store the sum (padded with zeros if necessary)
    string c(maxLength + 1, '0'); // +1 for potential carry

    int carry = 0;
    for (int i = maxLength - 1; i >= 0; i--) {
        // Handle cases for adding digits
        int digitA = (i < a.length()) ? a[i] - '0' : 0; // Convert char to int
        int digitB = (i < b.length()) ? b[i] - '0' : 0;

        int sum = carry + digitA + digitB;
        carry = sum / 10; // Calculate carry for next iteration
        c[i] = (sum % 10) + '0'; // Convert digit back to char and store
    }

    // Remove leading zeros (if any)
    int start = c.find_first_not_of('0');
    if (start != string::npos) {
        c.erase(0, start);
    } else {
        c = "0"; // Handle case where both strings are zero
    }

    reverse(c.begin(),c.end());
    cout << c << endl;
    return 0;
}
