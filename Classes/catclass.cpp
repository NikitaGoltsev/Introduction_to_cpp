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

// Constructurse (two examples)
Cat(){
    name = "Cat";
    color = "Cat's";
    cats_toy = "Avg_cat's toy";
}
Cat(string n){
    name = n;
    color = "Cat's";
    cats_toy = "Avg_cat's toy";
}
// I need to write construction and deestruction here


int main(){

    Cat obj1;
    obj1.print();
    
    return 0;
}