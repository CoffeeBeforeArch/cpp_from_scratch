#include <iostream>

class Point {
    int x;
    int y;

public:
    void set_x_y(int new_x, int new_y) {
        x = new_x;
        y = new_y;
    }
    void print() {
        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
};

int main() {
    Point p1;
    p1.set_x_y(10, 20);
    p1.print();
    return 0;
}
