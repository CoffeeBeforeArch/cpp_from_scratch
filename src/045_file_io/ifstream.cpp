#include <fstream>
#include <iostream>

int main() {
    std::ifstream input("data.txt");
    int data;
    while(input >> data) {
        std::cout << data << ' ';
    }
    std::cout << '\n';
    return 0;
}
