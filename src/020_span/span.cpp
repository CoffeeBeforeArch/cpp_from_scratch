#include <iostream>
#include <span>
#include <vector>

void print_subvector(std::span<int> span) {
    for(auto value : span) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> my_vector = {1, 2, 3, 4, 5};
    print_subvector(std::span(my_vector.begin() + 1, 3));
    return 0;
}
