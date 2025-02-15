#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    for (int type : a)
    {
        freq[type]++;
    }

    vector<int> counts;
    for (auto &pair : freq)
    {
        counts.push_back(pair.second);
    }
    sort(counts.rbegin(), counts.rend());

    int maxCandies = 0;
    int prevCount = counts[0] + 1;
    for (int count : counts)
    {
        int currentCount = min(count, prevCount - 1);
        if (currentCount <= 0)
            break;
        maxCandies += currentCount;
        prevCount = currentCount;
    }

    cout << maxCandies << endl;
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        solve();
    }

    return 0;
}