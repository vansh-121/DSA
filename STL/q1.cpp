#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//find first occurences of X

void q1() {
    int arr[9] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = 9; // Size of the array
    int X;     // Element to search for
    cin >> X;  // Input the value of X

    int ind = lower_bound(arr, arr + n, X) - arr; // Correct use of lower_bound
    if (ind != n && arr[ind] == X) {             // Check if the element exists
        cout << ind;
    } else {
        cout << -1;
    }
}

int main() {
    q1();
    return 0;
}
