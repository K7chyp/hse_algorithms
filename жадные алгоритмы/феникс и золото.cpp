#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x; 

    vector<int> w(n); 
    int total = 0;    

    for (int i = 0; i < n; ++i) {
        cin >> w[i];
        total += w[i];
    }

    
    if (total == x) {
        cout << "NO" << endl;
        return;
    }

    
    sort(w.begin(), w.end(), greater<int>());

    
    if (w[0] == x) {
        for (int i = 1; i < n; ++i) {
            if (w[i] != x) {
                swap(w[0], w[i]);
                break;
            }
        }
    }

    
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
        cout << w[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        solve(); 
    }

    return 0;
}