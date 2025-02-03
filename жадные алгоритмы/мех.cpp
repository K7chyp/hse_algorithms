#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    bool has_zero = false, has_one = false;
    int zero_blocks = 0;

    
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            has_zero = true;
            if (i == 0 || s[i - 1] == '1') {
                zero_blocks++;
            }
        } else {
            has_one = true;
        }
    }

    if (!has_zero) {
        cout << 0 << endl; 
    } else if (!has_one) {
        cout << 1 << endl; 
    } else {
        cout << min(2, zero_blocks) << endl; 
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
