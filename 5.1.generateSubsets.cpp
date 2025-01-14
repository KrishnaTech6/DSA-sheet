#include <iostream>
#include <vector>
using namespace std;

// https://chatgpt.com/share/6786997f-d78c-800e-a2d9-a43b569c042e
void generateSubsets(vector<int>& arr, int m) {
    // Total number of subsets is 2^m
    int totalSubsets = 1 << m;

    // Iterate through all possible bitmasks (from 0 to 2^m - 1)
    for (int mask = 0; mask < totalSubsets; mask++) {
        cout << "{ ";

        // Check each bit of the mask
        for (int i = 0; i < m; i++) {
            // If the i-th bit is set (is 1 ), include arr[i] in the subset 
            if (mask & (1 << i)) {
                cout << arr[i] << " ";
            }
        }

        cout << "}" << endl;
    }

//     Example Walkthrough:
// Consider an array arr = {1, 2, 3}, and let’s say we are iterating over the subsets (bitmasks) starting from mask = 0 to mask = 7 (for m = 3):

// For mask = 0 (binary 000), none of the bits are set, so no elements are included in the subset.
// For mask = 1 (binary 001), only the first bit is set, so arr[0] (which is 1) is included.
// For mask = 3 (binary 011), the first and second bits are set, so arr[0] (which is 1) and arr[1] (which is 2) are included.
// For mask = 7 (binary 111), all the bits are set, so all the elements arr[0], arr[1], and arr[2] are included.
}

int main() {
    vector<int> arr = {1, 2, 3};  // Example array
    int m = arr.size();
    generateSubsets(arr, m);
    return 0;
}
