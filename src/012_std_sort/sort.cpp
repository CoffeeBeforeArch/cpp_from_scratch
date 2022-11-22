#include <algorithm>
#include <array>
#include <iostream>

void print(auto array) {
    for(auto value : array) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::array<int, 5> my_array = {53, 21, 2, 85, 2};
    print(my_array);

    std::ranges::sort(my_array);

    print(my_array);
    return 0;
}
