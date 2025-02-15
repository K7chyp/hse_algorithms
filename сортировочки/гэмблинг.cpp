#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    long long scoreA = 0, scoreB = 0;
    int i = 0, j = 0;
    bool turnA = true;

    while (i < n || j < n)
    {
        if (turnA)
        {

            if (i < n && (j >= n || a[i] >= b[j]))
            {
                scoreA += a[i];
                ++i;
            }
            else if (j < n)
            {

                ++j;
            }
        }
        else
        {

            if (j < n && (i >= n || b[j] >= a[i]))
            {
                scoreB += b[j];
                ++j;
            }
            else if (i < n)
            {

                ++i;
            }
        }
        turnA = !turnA;
    }

    cout << (scoreA - scoreB) << endl;

    return 0;
}