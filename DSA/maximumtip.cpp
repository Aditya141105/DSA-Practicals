#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 4, 3, 2, 7, 5, 9, 6};
    int brr[] = {1, 2, 3, 6, 5, 4, 9, 8};

    int n = 8;
    int limita = 4;
    int limitb = 4;

    pair<int, int> diffs[n];  // pair of (difference, index)

    // Calculate differences and store them with their indices
    for (int i = 0; i < n; i++) {
        diffs[i] = make_pair(arr[i] - brr[i], i);
    }

    // Sort the pairs based on the differences
    sort(diffs, diffs + n);

    int ans = 0;

    // Sum the largest `limita` elements from `arr`
    for (int i = n - 1; i >= n - limita; i--) {
        int index = diffs[i].second;
        ans += arr[index];
    }

    // Sum the smallest `limitb` elements from `brr`
    for (int i = 0; i < limitb; i++) {
        int index = diffs[i].second;
        ans += brr[index];
    }

    cout << ans << endl;
    return 0;
}
