#include <iostream>
#include <string>
using namespace std;

int main() {
    string situation;
    cin >> situation;

    if (situation.find("0000000") != string::npos || situation.find("1111111") != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
