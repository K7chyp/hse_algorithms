#include <iostream>

using namespace std;

void generate(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << "()";
        for (int j = 0; j < n - i; j++) cout << "(";
        for (int j = 0; j < n - i; j++) cout << ")";
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        generate(n);
    }
    return 0;
}
