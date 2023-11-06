#include <iostream>


void sumWithPointers(const int* a, const int* b, int* sum) {
    *sum = *a + *b;
}

void sumWithReferences(const int& a, const int& b, int& sum) {
    sum = a + b;
}

int main() {
    int number1 = 5;
    int number2 = 10;
    int sum = 0;

    sumWithPointers(&number1, &number2, &sum);

    std::cout << "Sum with pointers: " << sum << std::endl;

    sumWithReferences(number1, number2, sum);

    std::cout << "Sum with references: " << sum << std::endl;

    return 0;
}