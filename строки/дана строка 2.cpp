#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_palindrome(const string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

        if (is_palindrome(sorted_s)) {
            cout << -1 << endl;
        } else {
            cout << sorted_s << endl;
        }
    }
    return 0;
}
