#include <iostream>
#include <string>

using namespace std;

string restoreStringA(const string& b) {
    string a;
    a += b[0]; 
    for (size_t i = 1; i < b.length(); i += 2) {
        a += b[i];  
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        string a = restoreStringA(b);
        cout << a << endl;
    }
    return 0;
}