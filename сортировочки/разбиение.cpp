#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minCost(int n, int k, vector<int> &arr)
{
    if (k == 1)
    {

        return arr[n - 1] - arr[0];
    }

    vector<int> diffs;
    for (int i = 1; i < n; ++i)
    {
        diffs.push_back(arr[i] - arr[i - 1]);
    }

    sort(diffs.begin(), diffs.end(), greater<int>());

    long long totalCost = 0;
    for (int i = k - 1; i < diffs.size(); ++i)
    {
        totalCost += diffs[i];
    }

    return totalCost;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long result = minCost(n, k, arr);
    cout << result << endl;

    return 0;
}