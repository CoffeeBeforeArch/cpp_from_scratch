#include <iostream>

int main() {
    int a = 5;
    int *b = &a;
    *b += 1;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    return 0;
}
