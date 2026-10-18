#include <iostream>

int main() {
    int values[] = {10, 20, 30, 40};
    const int size = 4;
    const int position = 2;
    const int newValue = 35;

    if (position < 0 || position >= size) {
        std::cout << "Invalid position.\n";
        return 1;
    }

    values[position] = newValue;
    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << ' ';
    }
    std::cout << '\n';
}
