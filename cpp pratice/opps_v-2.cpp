#include <iostream>
using namespace std;
class area{
    private:
    int g;
    public:
    int a,b,c;
    float d,e,f;
    //function defination & declaration
    int recarea(int a, int b){
        c=a*b;
        cout<<"the area of rectangle is "<<c<<endl;
    }
    //function defination & declaration
    float triarea(float d,float e){
        f=0.5*d*e;
        cout<<"the area of triangle is "<<f<<endl;
    }
    //function defination 
    int squarea(int g1);
    
};
//function declaration
 int area :: squarea(int g1){
        g=g1;
        cout<<"the area of square is "<<g1*g1<<endl;
    }
int main(){
    area moon;
    moon.recarea(7,9);
    moon.triarea(5.0,7.0);
    moon.squarea(6);
    return 0;
}