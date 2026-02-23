#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <algorithm>

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

    // for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
    // {
    //     cout << *(it2);
    // }

    // for (auto it2 = v.begin(); it2 != v.end(); it2++)
    // {
    //     // cout << *(it2);
    // }

    // for (auto it3 : v)
    // {
    //     // cout << it3;
    // }
}

void explainList()
{
    list<int> ls = {20, 30, 40};

    ls.push_front(4);
    cout << *ls.begin();
}

void explainStack()
{
    stack<int> st;
    st.push(2);
    st.push(5);
    stack<int> st2;
    st2.push(7);
    st2.push(1);
    st.swap(st2);
    cout << st.top();
    cout << st.empty();
}

void explainQueue()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.front();
}

void explainPQueue()
{
    // Max heap
    priority_queue<int> pq;
    pq.push(8);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.pop();
    cout << pq.top();

    // Min Heap

    priority_queue<int, vector<int>, greater<int>> p;
    p.push(1);
    p.push(4);
    p.push(9);
    cout << p.top();
}

void explainSet()
{
    set<int> st;
    st.insert(4);
    st.insert(2);
    st.insert(7);
    st.insert(7);
    st.insert(9);
    st.erase(0);
    auto it = st.find(1);
    cout << *it;
    cout << st.count(9);

    auto it1 = st.find(9);
    auto it2 = st.find(3);
    st.erase(it1, it2);

    cout << st.count(7);
}

void explainMultiset()
{
    multiset<int> ms;
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.erase(ms.find(1));
    cout << ms.count(4);
}

void explainMap()
{
    map<int, int> mp;
    mp.insert({3, 2});
    mp.insert({4, 1});
    mp.insert({2, 7});
    mp.insert({2, 1});
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second;
    // }
    // cout << mp[2];
    // cout << mp[2];

    // auto it = mp.find(2);
    // cout << it->second;

    // int num = 3;
    // cout << __builtin_popcount(num);

    string s = "231";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    cout << *max_element(s.begin(), s.end());
    cout << *min_element(s.begin(), s.end());
}

int cnt = 0;

void print()
{

    if (cnt == 4)
    {
        return;
    }
    cout << cnt << " ";
    cnt++;
    print();
}
int main()
{
    print();
}