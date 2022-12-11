#include <iostream>
#include <vector>
#include <algorithm>

struct IsDivisable {
    int divisor;
    IsDivisable(int new_divisor) : divisor(new_divisor) {}
    bool operator()(int dividend) {
        return dividend % divisor == 0;
    }
};

int main() {
    IsDivisable is_divisable_by_10(10);
    std::vector<int> my_vector = {41, 20, 84, 94, 23};
    auto itr = std::ranges::find_if(my_vector, is_divisable_by_10);
    std::cout << *itr << '\n';
    return 0;
}
