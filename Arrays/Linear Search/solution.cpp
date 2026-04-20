#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int num;
    cin >> num;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << linear_search(arr, n, num);
}