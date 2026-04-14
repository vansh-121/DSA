#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<largest_element(arr, n);
}