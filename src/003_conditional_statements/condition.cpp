#include <iostream>

int main() {
    int a = 15;
    int b = 10;
    
    if (a < b) {
        std::cout << "a is less than b!\n";
    } else if (a == b) {
        std::cout << "a is equal to b!\n";
    } else {
        std::cout << "a is greater than b!\n";
        if (a == 15) {
            std::cout << "a is equal to 15!\n";
        }
    }
    return 0;
}
