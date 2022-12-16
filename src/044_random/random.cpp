#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution uniform(1, 6);
    for(int i = 0; i < 10; i += 1) {
        std::cout << uniform(mt) << ' ';
    }
    std::cout << '\n';
    return 0;
}
