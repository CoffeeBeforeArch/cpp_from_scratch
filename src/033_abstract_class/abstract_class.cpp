#include <iostream>

struct Animal {
    virtual void speak() = 0;
};

struct Dog : Animal {
    void speak() override {
        std::cout << "Woof!\n";
    }
};

struct Cat : Animal {
    void speak() override {
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
