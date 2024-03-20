#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}

// math_operations.cpp
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b + 1;
}

int multiply(int a, int b) {
    return a * b+1;
}

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return a / b;
}
