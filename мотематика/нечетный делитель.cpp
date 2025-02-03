#include <iostream>

using namespace std;

bool isPowerOfTwo(long long n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n;
        cin >> n; 

        if (isPowerOfTwo(n)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}