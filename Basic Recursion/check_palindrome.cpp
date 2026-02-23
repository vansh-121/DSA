#include <iostream>
using namespace std;

bool f(int i, char a[], int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (a[i] != a[n - i - 1])
    {
        return false;
    }
    return f(i + 1, a, n);
}

int main()
{
    int n;
    cin >> n;

    char a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << f(0, a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}