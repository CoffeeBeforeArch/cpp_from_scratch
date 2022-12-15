#include <atomic>
#include <iostream>
#include <thread>

int main() {
    std::atomic<int> counter = 0;
    auto work = [&counter](){
        for(int i = 0; i < 10000; i += 1) {
            counter += 1;
        }
    };

    std::thread t1(work);
    std::thread t2(work);
    t1.join();
    t2.join();

    std::cout << counter << '\n';
    return 0;
}
