#include <iostream>
#include <string>

class Rectangle {
private:
  int mn;
  char *descrip;
  int length_d;

public:
  void print() {}

  Rectangle() { mn = 10; }

  Rectangle(int n) { mn = n; }
  ~Rectangle();
};

int main() {

  Rectangle array_of_obj[4] = {Rectangle(5), Rectangle(5), Rectangle(5),
                               Rectangle(5)};

  retunt 0;
}