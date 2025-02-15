#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    bool hasOdd = false, hasEven = false;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            hasEven = true;
        }
        else
        {
            hasOdd = true;
        }
    }

    if (hasOdd && hasEven)
    {
        sort(a.begin(), a.end());
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}