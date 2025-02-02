#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string password;
    cin >> password; 

    int n;
    cin >> n; 
    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i]; 
    }

    for (const string& word : words) {
        if (word == password) {
            cout << "YES" << endl;
            return 0;
        }
    }

    for (const string& word1 : words) {
        for (const string& word2 : words) {
            if (word1[1] == password[0] && word2[0] == password[1]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
   cout << "NO" << endl;
    return 0;
}