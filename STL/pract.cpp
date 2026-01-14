#include <iostream>
#include <vector>

using namespace std;

int print(int a, int b)
{
    return a + b;
}

void Pair()
{
    pair<int, int> p = {1, 3};
    // cout<<p.first;
    cout << p.second;

    pair<int, pair<int, int>> p2 = {1, {2, 5}};
    cout << p2.second.first;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].second;
}

void explainvector()
{
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    // cout << v[2];

    vector<int>::reverse_iterator it = v.rbegin();

    // cout << v.back();
    v.erase(v.begin() + 1, v.begin() + 2);
    v.insert(v.begin(), 500);
    vector<int> v2 = {50, 50};
    v.insert(v.begin(), v2.begin(), v2.end());

    v.pop_back(); // last element remove
    // v.clear();
    // cout<<v.empty();
    // cout<<v.size();

    for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *(it2);
    }

    for (auto it2 = v.begin(); it2 != v.end(); it2++)
    {
        // cout << *(it2);
    }

    for (auto it3 : v)
    {
        // cout << it3;
    }
}

int main()
{
    explainvector();
    return 0;
}