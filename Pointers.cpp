//
// Created by sanju on 7/18/24.
//

#include <iostream>

#define LOG(x) std::cout << x << std::endl
/*
int main() {
    int var = 8;
    int* ptr = &var;

    *ptr = 10;
    LOG(var);

    std::cin.get();
}
*/

int main() {
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr = &buffer;

    delete[] buffer;
    std::cin.get();
}
