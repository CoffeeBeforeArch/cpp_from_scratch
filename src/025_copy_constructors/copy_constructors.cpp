#include <iostream>

struct Point {
    int x;
    int y;
    
    Point(int new_x, int new_y) : x(new_x), y(new_y) {}
    Point(const Point &p) = delete;
    void print() {
        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
};

int main() {
    Point p1(10, 20);
    p1.print();

    Point p2 = p1;
    p2.print();
    return 0;
}
