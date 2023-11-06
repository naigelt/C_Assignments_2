#include <iostream>

int main() {
    char mjono[] = "Hello";
    const char* ptr = mjono; 
    size_t length = 0; 

    while (*ptr != '\0') {
        ++ptr; 
        ++length; 
    }

    std::cout << "The length of the string \"" << mjono << "\" is " << length << "." << std::endl;

    return 0;
}