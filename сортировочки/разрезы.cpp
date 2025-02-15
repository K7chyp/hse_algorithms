#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, B;
    cin >> n >> B;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> cutCosts;
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        if (oddCount == evenCount)
        {

            int cost = abs(a[i] - a[i + 1]);
            cutCosts.push_back(cost);
        }
    }

    sort(cutCosts.begin(), cutCosts.end());

    int totalCost = 0;
    int maxCuts = 0;

    for (int cost : cutCosts)
    {
        if (totalCost + cost <= B)
        {
            totalCost += cost;
            maxCuts++;
        }
        else
        {
            break;
        }
    }

    cout << maxCuts << endl;

    return 0;
}