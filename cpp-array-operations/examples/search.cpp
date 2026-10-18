#include <iostream>

int main() {
    const int values[] = {10, 20, 30, 40};
    const int size = 4;
    const int target = 30;
    bool found = false;

    for (int i = 0; i < size; ++i) {
        if (values[i] == target) {
            std::cout << target << " found at index " << i << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << target << " was not found.\n";
    }
}
