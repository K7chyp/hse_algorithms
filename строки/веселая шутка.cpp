#include <iostream>
#include <string>
#include <map>

using namespace std;

string canFormNames(const string& guest, const string& host, const string& pile) {
    map<char, int> guestHostCount; 
    map<char, int> pileCount;      
    
    for (char ch : guest) {
        guestHostCount[ch]++;
    }
    for (char ch : host) {
        guestHostCount[ch]++;
    }

    // Подсчет букв в кучке
    for (char ch : pile) {
        pileCount[ch]++;
    }


    for (auto& pair : guestHostCount) {
        char ch = pair.first;
        int required = pair.second;
        if (pileCount[ch] < required) {
            return "NO";
        }
    }

    for (auto& pair : pileCount) {
        char ch = pair.first;
        int available = pair.second;
        if (guestHostCount.find(ch) == guestHostCount.end() || available > guestHostCount[ch]) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string result = canFormNames(guest, host, pile);
    cout << result << endl;
    return 0;
}