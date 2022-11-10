#include <iostream>

int main() {
    int work_items = 10;
    while (work_items > 0) {
        std::cout << "Work items: " << work_items << '\n';
        work_items -= 1;
    }
    return 0;
}
