#include <iostream>
#include <memory>

template <typename T>
struct DynamicArray {
    int size;
    std::unique_ptr<T[]> ptr;

    DynamicArray(int new_size) : size(new_size), ptr(new T[new_size]) {}

    void fill(T value) {
        for(int i = 0; i < size; i += 1) {
            ptr[i] = value;
        }
    }

    void print() {
        for(int i = 0; i < size; i++) {
            std::cout << ptr[i] << ' ';
        }
        std::cout << '\n';
    }
};

int main() {
    DynamicArray<int> int_array(10);
    int_array.fill(5);
    int_array.print();

    DynamicArray<double> double_array(10);
    double_array.fill(1.23);
    double_array.print();
    return 0;
}
