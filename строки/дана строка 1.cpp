#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    int q; 
    cin >> q;
    vector<string> results;

    while (q--) {
        string t;
        cin >> t;
        
        int ab_count = 0, ba_count = 0;
        for (size_t i = 0; i < t.size() - 1; ++i) {
            if (t[i] == 'a' && t[i + 1] == 'b') {
                ab_count++;
            } else if (t[i] == 'b' && t[i + 1] == 'a') {
                ba_count++;
            }
        }

        if (ab_count == ba_count) {
            results.push_back(t);
        } else {
            for (size_t i = 0; i < t.size(); ++i) {
                if (ab_count > ba_count && t[i] == 'a') {
                    t[i] = 'b';
                    break;
                } else if (ba_count > ab_count && t[i] == 'b') {
                    t[i] = 'a';
                    break;
                }
            }
            results.push_back(t);
        }
    }

    for (const auto& res : results) {
        cout << res << endl;
    }
    return 0;
}
