#include <iostream>
#include <chrono>


// std::endl inserts new line and flushes the buffer. But if it is used many times, time and resource is wasted when flushing the buffer is not required. new line '\n' does not flushed the buffer. Buffer is tmp storage where data to be written out is stored.

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 10000000; i++)
        std::cout << "Hello World" << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff1 = end-start;
    

    start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 10000000; i++)
        std::cout << "Hello World" << '\n';

    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff2 = end-start;
    std::cout << "Time with \\n: " << diff2.count() << " s\n";
    std::cout << "Time with std::endl: " << diff1.count() << " s\n";

    return 0;
}
