#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, _result = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c; 
        if ((a + b + c) >= 2) { 
            ++_result; 
        }
    }

    cout << _result << endl; 
    return 0;
}
