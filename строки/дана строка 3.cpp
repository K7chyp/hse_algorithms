#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n; 
    cin >> n;
    string s;
    cin >> s;

    set<char> unique_letters;

    for (char c : s) {
        unique_letters.insert(tolower(c));
    }

    if (unique_letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
