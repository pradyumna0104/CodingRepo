#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
public:
int real,img;
ComplexNumbers(int r,int m){
    this->real=r;
    this->img=m;
}
void plus(ComplexNumbers a){
    this->real+=a.real;
    this->img+=a.img;
}
void multiply(ComplexNumbers b){
    int temp=this->real;
    this->real=this->real*b.real-this->img*b.img;
    this->img=temp*b.img+b.real*this->img;
}
void print(){
    cout<<real<<" + "<<"i"<<img<<endl;
}
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}