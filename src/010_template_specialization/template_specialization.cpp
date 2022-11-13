#include <array>
#include <iostream>

void print_array(auto array) {
    for (auto value : array) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

template<>
void print_array(std::array<int, 3> array) {
    std::cout << "Printing from our specialization!\n";
}

int main() {
    std::array<int, 3> my_int_array = {1, 2, 3};
    print_array(my_int_array);

    std::array<float, 3> my_float_array = {1.1f, 2.2f, 3.3f};
    print_array(my_float_array);
    return 0;
}
