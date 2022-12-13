#include <iostream>
#include <thread>
#include <vector>

void print_thread_id(int id) {
    std::cout << "Printing from thread: " << id << '\n';
}

int main() {
    std::vector<std::jthread> my_threads;
    for(int i = 0; i < 3; i+=1) {
        my_threads.emplace_back(print_thread_id, i);
    }
    return 0;
}
