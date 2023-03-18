#include <iostream>
#include <string>

// Class number 1, introduction
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


// Class number 2. Acces specefication
class Employee
{
private:
    /* data */
    std::string name;

    void set_bill(double mean){
        if(mean != 0)bill_bm = mean;
        else bill_bm = 100;
    }

    double get_result(){
        double result = -1;
        std::string your_name;
        std::cin << your_name;
        if(your_name == name){
            result = bill_bm;
        }
        return result;
    }

public:
    double bill_bm;
};



// Main function here to test classes
int mian(int argc, char *argv[]){

    /* //Class 01
    // Work with class
    BanckAccount acc01; // That's object creation
    acc01.name = "Higerd";
    acc01.balance = 0; 
    std::cout << acc01.balance << "\n";
    */

    //Class 02
    Employee empl01;

    //Example 
    //1)We can get name from class, but we can't just get value of bill
    //becasu we have no access
    //2) But we can use functions from public, that going to get var for us
    // that functions can protect private vars and funcions from something bad
    return 0;
}