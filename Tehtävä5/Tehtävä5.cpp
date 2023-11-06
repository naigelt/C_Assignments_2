#include <iostream>


void zeroArray(int* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        array[i] = 0; // Set each element to 0
    }
}

int main() {
    int myArray[5] = { 1, 2, 3, 4, 5 };

    // Before zeroing out
    std::cout << "Array before zeroing out: ";
    for (int i : myArray) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    zeroArray(myArray, 5);

    // After zeroing out
    std::cout << "Array after zeroing out: ";
    for (int i : myArray) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}