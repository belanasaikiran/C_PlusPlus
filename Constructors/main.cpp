//
// Created by sanju on 8/9/24.
//


#include <iostream>

class Entity {


public:
    float X, Y;

    Entity() { // constuctor name must match the class name
        X = 0.0f, Y =0.0f;
    }

    Entity(const float x, const float y) { // constuctor can also have arguments to modify the values.
        X = x, Y = y;
    }



    void Print() const {
        std::cout << X << ", " << Y << std::endl;
    }
};

// removing construtors:
class Log {

// private:
    // Log(){} // we can also make the contructor private.
public:
    Log() = delete; // deleting the default constructor.
    static void Write() {

    }
};



int main() {
    Entity e(10.0f, 5.0f);
    std::cout << e.X << std::endl;

    e.Print();


    Log::Write();
    // Log 1; // we can't because default constructor is deleted.
    std::cin.get();
}