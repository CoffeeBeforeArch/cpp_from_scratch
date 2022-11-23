#include <iostream>
#include <vector>

void print(std::vector<int> vector) {
    for(auto value : vector) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> my_vector;
    my_vector.reserve(10);
    for(int i = 0; i < 10; i+=1) {
        std::cout << "Size: " << my_vector.size() << '\n';
        std::cout << "Capacity: " << my_vector.capacity() << '\n';
        my_vector.push_back(i);
    }
    return 0;
}
