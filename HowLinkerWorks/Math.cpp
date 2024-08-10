//
// Created by sanju on 8/1/24.
//

#include <iostream>

void Log(const char* message) {
    std::cout << message << std::endl;
}

int Multiply(int a, int b) {
    Log("Multiply: ");
    return a*b;
}




