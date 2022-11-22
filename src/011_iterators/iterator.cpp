#include <array>
#include <iostream>

int main() {
    std::array<int, 5> my_array = {1, 2, 3, 4, 5};
    for(auto itr = my_array.begin() + 1; itr < my_array.end(); itr += 1) {
        std::cout << *itr << ' ';
    }
    std::cout << '\n';

    return 0;
}
