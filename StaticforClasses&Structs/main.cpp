//
// Created by sanju on 8/6/24.
//


// Static inside a class or struct
#include<iostream>


struct Entity {
    static int x, y; // These values remain here and if they are once updated with any function, they change in all the places which are using this structure.
    void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;
int Entity::y;

int main(){

    Entity e;
    e.x = 2;
    e.y =3;

    Entity e1;
    e1.x = 5;
    e1.y = 8;

    e.Print();
    e1.Print();

    std::cin.get();
}