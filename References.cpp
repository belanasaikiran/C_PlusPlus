//
// Created by sanju on 7/18/24.
//
#include <iostream>

#define  LOG(x) std::cout << x <<std::endl;

// void Increment(int* value) { // method 1
//     (*value)++; // putting the pointer in the bracket deferences first) and then it increment or else it will increment the pointer but not the actual value
// };

void IncrementReference(int& value) { // method 2 -- easier, is it ?
    value++;
};

// int main(){
//     int a = 5;
//     int b = 8;
//
//     int& ref = a; // NOTE: when you declare a reference, you have to assign it a value.
//     // Increment(&a); // pass the value by reference
//     // ref = 2;
//     IncrementReference(a);
//     LOG(a);
//
//     std::cin.get();
// };


int main(){
    int a = 5;
    int b = 8;

    int* ref = &a;
    *ref = 2; // de-referencing is by adding a `*` infront of the pointer variable name
    ref = &b;
    *ref = 1;
    LOG(a);
    LOG(b);

    std::cin.get();
};