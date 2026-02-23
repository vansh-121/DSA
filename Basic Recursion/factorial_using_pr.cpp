#include <iostream>
using namespace std;

// Using functional recursion

void f(int i, int mult)
{
    if (i < 1)
    {
        cout << mult;
        return;
    }
    f(i - 1, mult * i);
}

int main()
{
    int n;
    cin >> n;
    f(n, 1);
}