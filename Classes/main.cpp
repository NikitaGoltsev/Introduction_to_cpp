#include <iostream>
#include <string>

class BanckAccount{ // Class as a type to organise some date
    public: // one of two accces options
        // we get acces also from out of a classes
        // That's vall
        std::string name;
        int balance;
        // Also we can add functions
        void withdraw(int amount){
            balance-= amount;
        }
        void print(){
            std::cout << balance << "\n";
        }
    private:
        //Acces only from within
};


// Main function here to test classes
int mian(int argc, char *argv[]){

    // Work with class
    BanckAccount acc01; // That's object creation
    acc01.name = "Higerd";
    acc01.balance = 0; 
    std::cout << acc01.balance << "\n";

    return 0;
}