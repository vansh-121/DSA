#include <bits/stdc++.h>
using namespace std;

int second_largest_element(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    int largest = arr[n - 1];

    for (int i = n - 2; i >=0; i--)
    {

        if (arr[i] != largest)
        {
            return arr[i];
            break;
        }
    }
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
    cout << second_largest_element(arr, n);
    return 0;
}