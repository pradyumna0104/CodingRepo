#include <iostream>
using namespace std;
class room{
    int real;
    public:
    room(){
        real = 0;
    }
    room(int a){
        real = a;
    }
    void display(){
        cout<<real<<endl;
    }
    room operator*(int t){
        room temp;
        temp.real = real*t;
        return temp;
    }
};
int main(){
    
    room c1(3),c3;
    cout<<"the 1st  number is : ";
    c1.display();
    c3=c1*8;
    cout<<"the multiplication is : ";
    c3.display();
    return 0;
}