#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;
        
        int d = x[0] - '0'; 
        int len = x.size(); 
        
        int presses = (d - 1) * 10 + (len * (len + 1)) / 2;

        cout << presses << endl;
    }
}

int main() {
    solve();
    return 0;
}
