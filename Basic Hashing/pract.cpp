#include <bits/stdc++.h>
using namespace std;
int hashi[100000000];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // precompute

    for (int i = 0; i < n; i++)
    {
        hashi[a[i]] = hashi[a[i]] + 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        cout << hashi[number] << endl;
    }
}