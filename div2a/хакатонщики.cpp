#include <iostream> 

int main() {
    int p;
    std::cin >> p;

    if (p % 2 != 0 or p < 4) {
        std::cout << "NO" << std::endl;
    }
    else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}