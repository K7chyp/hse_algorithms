#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long maxMedian(int n, long long k, vector<int> &arr)
{

    sort(arr.begin(), arr.end());

    int mid = n / 2;
    long long currentMedian = arr[mid];

    for (int i = mid + 1; i < n; ++i)
    {
        long long diff = arr[i] - arr[i - 1];
        long long operationsNeeded = diff * (i - mid);

        if (operationsNeeded <= k)
        {

            k -= operationsNeeded;
            currentMedian = arr[i];
        }
        else
        {

            currentMedian += k / (i - mid);
            k = 0;
            break;
        }
    }

    if (k > 0)
    {
        currentMedian += k / (n - mid);
    }

    return currentMedian;
}

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long result = maxMedian(n, k, arr);
    cout << result << endl;

    return 0;
}