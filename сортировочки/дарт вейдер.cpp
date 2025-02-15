#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s, b;
    cin >> s >> b;

    vector<int> a(s);
    for (int i = 0; i < s; ++i)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> bases(b);
    for (int i = 0; i < b; ++i)
    {
        cin >> bases[i].first >> bases[i].second;
    }

    sort(bases.begin(), bases.end());

    vector<int> prefixSum(b + 1, 0);
    for (int i = 0; i < b; ++i)
    {
        prefixSum[i + 1] = prefixSum[i] + bases[i].second;
    }

    for (int i = 0; i < s; ++i)
    {

        int low = 0, high = b - 1;
        int best = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (bases[mid].first <= a[i])
            {
                best = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (best == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << prefixSum[best + 1] << " ";
        }
    }

    cout << endl;
    return 0;
}