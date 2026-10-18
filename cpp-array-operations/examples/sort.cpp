#include <algorithm>
#include <iostream>

int main() {
    int values[] = {30, 10, 40, 20};
    const int size = 4;

    std::sort(values, values + size);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}
