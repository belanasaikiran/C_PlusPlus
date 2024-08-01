//
// Created by sanju on 7/18/24.
//

#include<iostream>

#define LOG(x) std::cout << x << std::endl;

class Player {// a class everything private by default, so you need explicitly mention which variables to be public and which to private
public:
    int x, y;
    int speed;

    void Move(Player& player, int xa, int ya){
    player.x += xa * player.speed;
    player.y += ya * player.speed;

};
};



int main() {
    Player player;
    player.Move(player,1, -1);


    std::cin.get();
}