#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input, result;
    cin >> input;

    string vowels = "aoyeuiAOYEUI";

    for (char c : input) {
        if (vowels.find(c) == string::npos) {
            c = tolower(c);
            result += '.';
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
