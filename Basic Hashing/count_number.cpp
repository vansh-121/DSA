#include <iostream>
using namespace std;

int f(int number, int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == number)
        {
            cnt = cnt + 1;
        }
    }
    return cnt;
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
    cout << f(4, a, n);
}