#include <iostream>
using namespace std;

class Room {
   private:
    double length;
    double breadth;

   public:
    
    Room(double l, double b) {
        length = l;
        breadth = b;
    }
    Room(double l) {
        length = l;
        breadth = l;
    }
   
    double calculateArea_rec() {
        return length * breadth;
    }
    double calculateArea_tri() {
        return 0.5*length * breadth;
    }
    double calculateArea_cir() {
        return 3.1415*length * breadth;
    }
};

int main() {
    Room room1(8.2, 6.6),room2(5.4,56),room3(7.6);
    cout << "Area of rectangle = " << room1.calculateArea_rec() << endl;
    cout << "Area of triangle = " << room2.calculateArea_tri() << endl;
    cout << "Area of circle = " << room3.calculateArea_cir() << endl;
    return 0;
}