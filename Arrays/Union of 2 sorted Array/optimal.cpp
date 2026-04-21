#include <bits/stdc++.h>
using namespace std;

vector<int> union_array(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    vector<int> arr;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (arr.size() == 0 || arr.back() != arr1[i])
            {
                arr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (arr.size() == 0 || arr.back() != arr2[j])
            {
                arr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (arr.size() == 0 || arr.back() != arr1[i])
        {
            arr.push_back(arr1[i]);
        
        }
        i++;
    }

    while (j < n2)
    {

        if (arr.size() == 0 || arr.back() != arr2[j])
        {
            arr.push_back(arr2[j]);
        }
        j++;
    }
    return arr;
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

    vector<int> result = union_array(arr1, arr2, n1, n2);
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}