#include <iostream>
#include <vector>

void add_elements(std::vector<int> &vector, int N) {
    for(int i = 0; i < N; i += 1) {
        vector.push_back(i);
    }
}

int main() {
    std::vector<int> my_vector;
    add_elements(my_vector, 10);

    for(auto value : my_vector) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}
