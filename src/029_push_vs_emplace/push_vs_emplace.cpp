#include <iostream>
#include <utility>
#include <vector>

struct S {
    int x;

    S(int new_x) : x(new_x) {
        std::cout << "Constructor!\n";
    }
    S(const S &s) : x(s.x) {
        std::cout << "Copy Constructor!\n";
    }
    S(S &&s) : x(s.x) {
        std::cout << "Move Constructor!\n";
    }
};

int main() {
    std::vector<S> my_vector;
    my_vector.emplace_back(10);
    return 0;
}
