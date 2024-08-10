//
// Created by sanju on 8/8/24.
//


#include <iostream>


enum Example : unsigned char{ // enums by default are 32 bit integers. We can alos assing as char
    A = 5, B, C
};

int a = 0;
int b = 1;
int c = 2;


int main() {

    Example value = B;
    // int value = B;
    if(value == 6) {
        // Do Something here
    }

    std::cin.get();
}