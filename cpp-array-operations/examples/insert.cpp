#include <iostream>

int main() {
    int values[100] = {10, 20, 30, 40};
    int size = 4;
    int position = 2;
    int value = 25;

    if (position < 0 || position > size || size == 100) {
        std::cout << "Invalid insertion.\n";
        return 1;
    }

    for (int i = size; i > position; --i) {
        values[i] = values[i - 1];
    }
    values[position] = value;
    ++size;

    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << ' ';
    }
    std::cout << '\n';
}
