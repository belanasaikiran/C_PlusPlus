//
// Created by sanju on 8/20/24.
//
#include <iostream>
#include <string>

class Entity {
public:
    virtual std::string GetName() { return "Entity";} //virtualizing this function so, we can use polymorphism and more efficient way of cleaning the memory
};


class Player:public Entity {
private:
    std::string m_Name;

public:
    Player(const std::string& name) : m_Name(name){}

    std::string GetName() override {return m_Name;} // make sure to use override, even not using override, it works, but using override  helps in better code readability and also it's provides syntax errors when making mistake in using virtual functions. It highlights whether the function is already declared in parent class MyClass {
    public:
      MyClass();
      MyClass(MyClass &&) = default;
      MyClass(const MyClass &) = default;
      MyClass &operator=(MyClass &&) = default;
      MyClass &operator=(const MyClass &) = default;
      ~MyClass();

    private:
      
    };

    MyClass::MyClass() {
    }

    MyClass::~MyClass() {
    }
};

int main() {
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;

    std::cin.get();
}
