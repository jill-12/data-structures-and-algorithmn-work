#include <algorithm>
#include <iomanip>
#include <iostream>
#include <limits>

namespace {
constexpr int MAX_SIZE = 100;

void display(const int values[], int size) {
    if (size == 0) {
        std::cout << "Array is empty.\n";
        return;
    }

    std::cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << (i + 1 == size ? '\n' : ' ');
    }
}

void traverse(const int values[], int size) {
    if (size == 0) {
        std::cout << "There are no elements to traverse.\n";
        return;
    }

    std::cout << "Index -> Value\n";
    for (int i = 0; i < size; ++i) {
        std::cout << i << " -> " << values[i] << '\n';
    }
}

bool readInteger(const char* prompt, int& value) {
    std::cout << prompt;
    if (std::cin >> value) {
        return true;
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a valid integer.\n";
    return false;
}

void insertElement(int values[], int& size) {
    if (size == MAX_SIZE) {
        std::cout << "Array is full; insertion is not possible.\n";
        return;
    }

    int position;
    int value;
    if (!readInteger("Enter position (0 to " + std::to_string(size) + "): ", position) ||
        !readInteger("Enter value: ", value)) {
        return;
    }

    if (position < 0 || position > size) {
        std::cout << "Invalid position.\n";
        return;
    }

    for (int i = size; i > position; --i) {
        values[i] = values[i - 1];
    }
    values[position] = value;
    ++size;
    std::cout << "Element inserted successfully.\n";
}

void deleteElement(int values[], int& size) {
    if (size == 0) {
        std::cout << "Array is empty; deletion is not possible.\n";
        return;
    }

    int position;
    if (!readInteger("Enter position (0 to " + std::to_string(size - 1) + "): ", position)) {
        return;
    }

    if (position < 0 || position >= size) {
        std::cout << "Invalid position.\n";
        return;
    }

    for (int i = position; i < size - 1; ++i) {
        values[i] = values[i + 1];
    }
    --size;
    std::cout << "Element deleted successfully.\n";
}

void searchElement(const int values[], int size) {
    int target;
    if (!readInteger("Enter value to search for: ", target)) {
        return;
    }

    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (values[i] == target) {
            std::cout << "Value found at position " << i << ".\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "Value was not found.\n";
    }
}

void updateElement(int values[], int size) {
    int position;
    int value;
    if (!readInteger("Enter position to update: ", position) ||
        !readInteger("Enter new value: ", value)) {
        return;
    }

    if (position < 0 || position >= size) {
        std::cout << "Invalid position.\n";
        return;
    }
    values[position] = value;
    std::cout << "Element updated successfully.\n";
}

void statistics(const int values[], int size) {
    if (size == 0) {
        std::cout << "Array is empty.\n";
        return;
    }

    int minimum = values[0];
    int maximum = values[0];
    long long sum = 0;
    for (int i = 0; i < size; ++i) {
        minimum = std::min(minimum, values[i]);
        maximum = std::max(maximum, values[i]);
        sum += values[i];
    }

    std::cout << "Minimum: " << minimum << "\n"
              << "Maximum: " << maximum << "\n"
              << "Sum: " << sum << "\n"
              << "Average: " << std::fixed << std::setprecision(2)
              << static_cast<double>(sum) / size << '\n';
}

void printMenu() {
    std::cout << "\n--- Array Operations ---\n"
              << "1. Insert\n"
              << "2. Delete\n"
              << "3. Traverse\n"
              << "4. Display\n"
              << "5. Search\n"
              << "6. Update\n"
              << "7. Statistics\n"
              << "8. Reverse\n"
              << "9. Sort ascending\n"
              << "0. Exit\n";
}
} // namespace

int main() {
    int values[MAX_SIZE]{};
    int size = 0;
    int choice;

    do {
        printMenu();
        if (!readInteger("Choose an option: ", choice)) {
            continue;
        }

        switch (choice) {
        case 1:
            insertElement(values, size);
            break;
        case 2:
            deleteElement(values, size);
            break;
        case 3:
            traverse(values, size);
            break;
        case 4:
            display(values, size);
            break;
        case 5:
            searchElement(values, size);
            break;
        case 6:
            updateElement(values, size);
            break;
        case 7:
            statistics(values, size);
            break;
        case 8:
            std::reverse(values, values + size);
            std::cout << "Array reversed.\n";
            break;
        case 9:
            std::sort(values, values + size);
            std::cout << "Array sorted.\n";
            break;
        case 0:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid option.\n";
        }
    } while (choice != 0);

    return 0;
}
