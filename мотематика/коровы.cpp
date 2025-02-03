#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i]; 
        }

        set<double> areas; 

        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                double area = 0.5 * abs(x[i] - x[j]); 
                areas.insert(area); 
            }
        }

        cout << areas.size() << endl; 
    }

    return 0;
}