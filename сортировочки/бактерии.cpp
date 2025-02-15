#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int n, K;
    cin >> n >> K;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    stack<int> st;
    for (int i = 0; i < n; ++i)
    {

        while (!st.empty() && a[i] > st.top() && a[i] <= st.top() + K)
        {
            st.pop();
        }

        st.push(a[i]);
    }

    cout << st.size() << endl;

    return 0;
}