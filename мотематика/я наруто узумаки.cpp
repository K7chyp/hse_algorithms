#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; i += 2) {
        b[i] = a[i + 1];
        b[i + 1] = -a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
