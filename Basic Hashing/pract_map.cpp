#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // iterate in map

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second<<endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        // fetch

        cout << mpp[ch] << endl;
    }
    return 0;
}