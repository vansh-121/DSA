#include <iostream>
using namespace std;

void f(int i, int r, int a[])
{
    if (i >= r)
    {
        return;
    }
    swap(a[i], a[r]);
    f(i + 1, r - 1, a);
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    f(0, n - 1, a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}