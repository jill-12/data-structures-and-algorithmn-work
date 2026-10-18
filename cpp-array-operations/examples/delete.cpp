#include <iostream>

int main() {
    int values[100] = {10, 20, 30, 40};
    int size = 4;
    int position = 1;

    if (position < 0 || position >= size) {
        std::cout << "Invalid deletion.\n";
        return 1;
    }

    for (int i = position; i < size - 1; ++i) {
        values[i] = values[i + 1];
    }
    --size;

    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << ' ';
    }
    std::cout << '\n';
}
