#include <array>
#include <iostream>

void print_array(std::array<int, 3> array) {
    for(int value : array) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::array<int, 3> my_array_1 = {1, 2, 3};
    print_array(my_array_1);
    
    std::array<int, 3> my_array_2 = {4, 5, 6};
    print_array(my_array_2);
    return 0;
}
