#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; 
    string filename;
    cin >> filename;

    int deletions = 0; 
    int consecutiveX = 0; 

    for (char ch : filename) {
        if (ch == 'x') {
            consecutiveX++;
            if (consecutiveX >= 3) {
                deletions++;
            }
        } else {
            consecutiveX = 0; 
        }
    }

    cout << deletions << endl; 
    return 0;
}