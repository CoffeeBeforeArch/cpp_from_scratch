#include <iostream>
#include <random>

constexpr int factorial(int n) {
    if(n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    std::random_device rd;
    int result = factorial(rd() % 6);
    std::cout << result << '\n';
    return 0;
}
