#include <iostream>

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y; 

    int operations = y % x; 
    y -= operations;        
    y /= x;                 

    
    while (y != 0) {
        operations += y % 10; 
        y /= 10;              
    }

    cout << operations << endl; 
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        solve(); 
    }

    return 0;
}