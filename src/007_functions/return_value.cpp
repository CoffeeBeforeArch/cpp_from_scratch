#include <array>
#include <iostream>

int sum(std::array<int, 3> array) {
    int sum = 0;
    for(int value : array) {
        sum += value;
    }
    return sum;
}

int main() {
    std::array<int, 3> my_array = {1, 2, 3};
    int result = sum(my_array);
    std::cout << "The sum of our array is: " << result << '\n';
    return 0;
}
