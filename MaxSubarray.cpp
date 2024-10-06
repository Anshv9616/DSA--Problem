#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function for Kadane's algorithm
static int kadane(const vector<int>& arr) {
    if (arr.empty()) return 0; // Handle empty array case

    int max_sum = arr[0]; // Initialize with the first element
    int current_sum = arr[0]; // Start with the first element

    for (size_t i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]); // Either start a new subarray or extend the current one
        max_sum = max(max_sum, current_sum); // Update max_sum if current_sum is greater
    }
    return max_sum;
}

// Test the code
int main() {
    vector<int> myArray = {-3, 1, -8, 12, 0, -3, 5, -9, 4};
    
    cout << "Maximum Subarray Sum is: " << kadane(myArray) << endl;

    return 0;
}
