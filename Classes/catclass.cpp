#include <iostream>
#include <string>

// How to create constructers and destructors
class Cat{
    private:
        std::string name;
        std::string color;
        std::string cats_toy;
    public:
        void print(){
            std::cout << "" << name << "\n";
            std::cout << "" << color << "\n";
            std::cout << "" << cats_toy << "\n";
        }
};

int main(){

    return 0;
}