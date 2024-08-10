//
// Created by sanju on 8/1/24.
//

#include <iostream>
#include "static.h"
#define LOG(x) std::cout << x << std::endl

extern int s_Variable;

int main() {
    std::cout << s_Variable << std::endl;

    std::cin.get();
}