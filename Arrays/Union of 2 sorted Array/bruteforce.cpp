#include <bits/stdc++.h>
using namespace std;

int union_array(int arr1[], int arr2[], int n1, int n2)
{
    set<int> st;

    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    for (auto it : st)
    {
        cout << it << " ";
    }
}

int main()
{
    int n1;
    cin >> n1;

    int n2;
    cin >> n2;

    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    union_array(arr1, arr2, n1, n2);
}