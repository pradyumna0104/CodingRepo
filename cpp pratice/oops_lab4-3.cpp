#include <iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
    complex(){
        real = 0;
        imag = 0;
    }
    complex(int a,int b){
        real = a;
        imag = b;
    }
    void display(){
        cout<<real <<"+"<<imag<<"i"<<endl;
    }
    complex operator+(complex c2){
        complex temp;
        temp.real = real+c2.real;
        temp.imag = imag+c2.imag;
        return temp;
    }
};
int main(){
    complex c1(3,4),c2(5,2),c3;
    cout<<"the 1st complex number is : ";
    c1.display();
    cout<<"the 2nd complex number is : ";
    c2.display();
    c3=c1+c2;
    cout<<"the addition is : ";
    c3.display();
    return 0;
}