#include <iostream>

struct Animal {
    void speak() {
        std::cout << "Default speak function!\n";
    }
};

struct Dog : Animal {
    void speak() {
        std::cout << "Woof!\n";
    }
};

struct Cat : Animal {
    void speak() {
        std::cout << "Meow!\n";
    }
};

int main() {
    Dog d;
    d.speak();
    Cat c;
    c.speak();

    Animal &a1 = d;
    a1.speak();
    Animal &a2 = c;
    a2.speak();
    return 0;
}
