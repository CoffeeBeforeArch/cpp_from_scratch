#include <iostream>

struct S {
    int a;
    int b;
    auto operator<=>(const S &s) const = default;
};

int main() {
    S s1 {10, 20};
    S s2 {1, 3};
    std::cout << (s1 > s2) << '\n';
    return 0;
}
