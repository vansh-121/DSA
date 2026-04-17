#include <bits/stdc++.h>
using namespace std;

void rotate_array(int arr[], int n, int d)
{
    d = d % n;
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    int n;
    cin >> n;

    int d;
    cin >> d;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate_array(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}