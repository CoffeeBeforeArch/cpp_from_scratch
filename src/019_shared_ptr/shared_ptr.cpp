#include <iostream>
#include <memory>

int main() {
    auto ptr1 = std::make_shared<int[]>(10);
    auto ptr2 = ptr1;
    std::cout << "Reference count: " << ptr1.use_count() << '\n';
    return 0;
}
