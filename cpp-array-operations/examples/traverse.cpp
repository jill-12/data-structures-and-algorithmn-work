#include <iostream>

int main() {
    const int values[] = {10, 20, 30, 40};
    const int size = 4;

    for (int i = 0; i < size; ++i) {
        std::cout << "Index " << i << ": " << values[i] << '\n';
    }
}
