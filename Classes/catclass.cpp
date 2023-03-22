#include <iostream>
#include <string>

// How to create constructers and destructors
class Cat{
    private:
        int *countr;
        std::string name;
        std::string color;
        std::string cats_toy;
    public:
        Cat(){
            name = "Cat";
            color = "Cat's";
            cats_toy = "Avg_cat's toy";
            countr = new int[5];
        }
        void print(){
            std::cout << "" << name << "\n";
            std::cout << "" << color << "\n";
            std::cout << "" << cats_toy << "\n";
        }

        ~Cat(){
            std::cout << "All is ok" << "\n";
            delete[] countr;
        }
};

// Constructurse (two examples)

/*
Cat(){
    name = "Cat";
    color = "Cat's";
    cats_toy = "Avg_cat's toy";
}*/

// I need to write construction and deestruction here


int main(){

    Cat obj1;
    obj1.print();
    
    return 0;
}