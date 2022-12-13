#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

int main() {
    std::mutex m;
    auto print_thread_id = [&m](int id) {
        std::lock_guard<std::mutex> lg(m);
        std::cout << "Printing from thread: " << id << '\n';
    };
    
    std::vector<std::jthread> my_threads;
    for(int i = 0; i < 3; i+=1) {
        my_threads.emplace_back(print_thread_id, i);
    }
    return 0;
}
