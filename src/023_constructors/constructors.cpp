#include <iostream>

struct Point {
    int x;
    int y;

    Point() = default;
    Point(int new_x, int new_y) : x(new_x), y(new_y) {}
    void print() {
        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
};

int main() {
    Point p;
    p.print();
    return 0;
}
