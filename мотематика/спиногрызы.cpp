#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> chairs;
        for (int i = n + 1; i <= 2 * n; ++i) {
            chairs.push_back(2 * i); 
        }

        for (int chair : chairs) {
            cout << chair << " ";
        }
        cout << endl;
    }

    return 0;
}