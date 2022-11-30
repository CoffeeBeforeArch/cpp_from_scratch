#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int[]>(10);
    for(int i = 0; i < 10; i += 1) {
        ptr[i] = i * i;
    }
    std::cout << ptr[5] << '\n';
    std::cout << ptr[9] << '\n';
    return 0;
}
