#include <iostream>

int main() {
    const int values[] = {10, 20, 30, 40};
    const int size = 4;
    int minimum = values[0];
    int maximum = values[0];
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        if (values[i] < minimum) minimum = values[i];
        if (values[i] > maximum) maximum = values[i];
        sum += values[i];
    }

    std::cout << "Minimum: " << minimum << '\n'
              << "Maximum: " << maximum << '\n'
              << "Sum: " << sum << '\n'
              << "Average: " << static_cast<double>(sum) / size << '\n';
}
