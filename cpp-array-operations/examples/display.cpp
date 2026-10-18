#include <iostream>

int main() {
    const int values[] = {10, 20, 30, 40};
    const int size = 4;

    std::cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << (i + 1 == size ? '\n' : ' ');
    }
}
