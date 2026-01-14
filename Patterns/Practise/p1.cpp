#include <iostream>
using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p3(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p4(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 2 * (n - i) - 1; j > 0; j--)
        {
            cout << "*";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i <= 0; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p7(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        for (int j = 0; j <= i; j++)
        {

            if (i % 2 == 0)
            {
                cout << start;
                start = 1 - start;
            }
            else
            {
                start = 1 - start;
                cout << start;
            }
        }
        cout << endl;
    }
}

void p8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "-";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p9(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
            cout << start;
            start++;
        }
        cout << endl;
    }
}

void p10(int n)
{
    for (int i = 0; i < n; i++)
    {
        // char ch = 'A';
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void p11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void p12(int n)
{
    for (int i = 0; i < n; i++)
    {
        char start = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
        }
        cout << endl;
    }
}

void p13(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j < ((2 * i + 1) / 2))
            {
                cout << ch++;
            }
            else
            {
                cout << ch--;
            }
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void p14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void p15(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        space = space + 2;
        cout << endl;
    }

    int spaceminus = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaceminus; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        spaceminus = spaceminus - 2;
        cout << endl;
    }
}

void p16(int n)
{
    int spaces = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        spaces = spaces - 2;
        cout << endl;
    }

    int spaceplus = 2;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaceplus; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        spaceplus = spaceplus + 2;
        cout << endl;
    }
}

void p17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void p18(int n)
{
    int start = 4;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 1) - 1 - j;
            int bottom = (2 * n - 1) - 1 - i;

            cout << n - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        p18(n);
    }
}