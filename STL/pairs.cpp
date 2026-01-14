#include <iostream>

using namespace std;

void Pairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // single pair

    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first << " " << q.second.second << endl; // doubly pair

    pair<int, int> arr[] = {{1, 2}, {3, 3}, {6, 7}}; // pair array
    cout << arr[2].second << endl;
}

int main()
{
    Pairs();
    return 0;
}