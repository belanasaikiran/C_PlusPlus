//
// Created by sanju on 7/18/24.
//

#include<iostream>


#define LOG(x) std::cout << x << std::endl;

struct  Player { // struct makes everything public by default, if you want some to be private, you need to explicitly mention that
    int x, y;
    int speed;

    void Move(Player& player, int xa, int ya){
        player.x += xa * player.speed;
        player.y += ya * player.speed;

    };
};

struct Vec2 {
    float x,y;

    void Add(const Vec2& other) {
        x += other.x;
        y += other.y;
    }
};

int main() {
    Player player;
    player.Move(player,1, -1);


    std::cin.get();
}