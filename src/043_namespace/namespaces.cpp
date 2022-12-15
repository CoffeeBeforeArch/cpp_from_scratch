#include <iostream>

namespace A {
    void print() {
        std::cout << "Printing from function 1!\n";
    }
}

void print() {
    std::cout << "Printing from function 2!\n";
}

int main() {
    ::print();
    return 0;
}
