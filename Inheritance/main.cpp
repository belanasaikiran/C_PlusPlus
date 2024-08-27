//
// Created by sanju on 8/9/24.
//

#include <iostream>

class Entity {
protected:
    float A, B;
public:
    float X, Y;

    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};


class Player: public Entity{ // This is how we extend the classes in C++
public:
    const char* Name;

    void PrintName() {
        std::cout << Name << std::endl;
    }

};


int main() {

    std::cout << sizeof(Player) << std::endl;
    Player player;
    player.Move(5,5); // testing inherited function from parent class.
    player.X = 2;
    player.A = 3;

    std::cin.get();
}