#include <algorithm>
#include <iostream>

int main() {
    int values[] = {10, 20, 30, 40};
    const int size = 4;

    std::reverse(values, values + size);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}
