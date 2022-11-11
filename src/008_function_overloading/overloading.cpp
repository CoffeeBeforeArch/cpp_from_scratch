#include <array>
#include <iostream>

void print_array(std::array<int, 3> array) {
    for (auto value : array) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

void print_array(std::array<int, 3> array) {
    std::cout << "Hello, world!\n";
}


int main() {
    std::array<int, 3> my_int_array = {1, 2, 3};
    print_array(my_int_array);
    return 0;
}
