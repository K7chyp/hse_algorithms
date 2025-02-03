#include <iostream>
#include <string>

using namespace std;

long long sumOfDigits(long long num) {
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        long long n;
        cin >> n; 

        if (n % 2050 != 0) {
            cout << -1 << endl; 
        } else {
            long long quotient = n / 2050;
            cout << sumOfDigits(quotient) << endl; 
        }
    }

    return 0;
}