#include <iostream>
#include "operation.h"
#include "addition.h"

/// @author Tautvydas Barauskis (Student ID: 511325)
/// @version 1.1

int main() {
    using namespace std::complex_literals;

    complex a = 1.0 + 3.0i;
    complex b = 3.0 - 1.0i;

    // dynamic polymorphism!
    operation* op = new addition{};

    std::cout << op->execute(a, b);

    // don't forget to delete a dynamically allocated object
    delete op;
}