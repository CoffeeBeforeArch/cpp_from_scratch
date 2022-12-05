#include <iostream>
#include <memory>
#include <utility>

int main() {
    auto ptr1 = std::make_unique<int[]>(10);
    std::cout << "ptr1 before move: " << ptr1.get() << '\n';
    auto ptr2 = std::move(ptr1);
    std::cout << "ptr1 after move: " << ptr1.get() << '\n';
    std::cout << "ptr2 after move: " << ptr2.get() << '\n';
    return 0;
}
