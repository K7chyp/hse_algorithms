#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    
    sort(b.rbegin(), b.rend());

    
    int idx = 0;
    for (int &x : a) {
        if (x == 0) {
            x = b[idx++];
        }
    }

    
    for (int i = 0; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            cout << "Yes\n";
            return;
        }
    }
    
    cout << "No\n";
}

int main() {
    solve();
    return 0;
}
