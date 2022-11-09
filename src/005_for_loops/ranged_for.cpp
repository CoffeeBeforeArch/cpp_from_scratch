#include <array>
#include <iostream>

int main() {
    std::array<int, 5> my_array = {42, 12, 63, 1, 3};
    for (int value : my_array) {
        std::cout << value << '\n';
    }
    return 0;
}
