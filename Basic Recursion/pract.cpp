#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Vansh\n";
    f(i + 1, n);
}

//print n to 1 using backtracking
void v(int i, int n)
{
    if (i > n)
    {
        return;
    }
    v(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    v(1, n);
}