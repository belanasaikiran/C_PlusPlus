//
// Created by sanju on 8/9/24.
//


#include <iostream>

class Entity {


public:
    float X, Y;

    Entity() { // constuctor name must match the class name
        X = 0.0f, Y = 0.0f;
        std::cout << "Create Entity" << std::endl;
    }

    Entity(const float x, const float y) { // constuctor can also have arguments to modify the values.
        X = x, Y = y;
    }

    ~Entity(){ // The Destructor starts with `~`. USed to unallocate the memory used while creating the object out of the class.
    std::cout << "Destroyed Entity" << std::endl;
    }

    void Print() const {
        std::cout << X << ", " << Y << std::endl;
    }
};


void Function(){
    Entity e;
    e.Print();

    // we can also call destructor manually -- not recommended and mostly not needed.
    e.~Entity();

}


int main() {
    Function();
    std::cin.get();
}