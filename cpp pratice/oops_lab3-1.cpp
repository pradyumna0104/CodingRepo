/*Find the area of triangle ,trapezium,rectangle,and square using virtual base class ?*/
#include <iostream>
using namespace std;
class tri{
    protected:
    float base;
    float height;
};
class squ:virtual public tri{
    protected:
    int side;
};
class rec:virtual public tri{
    protected:
    int length;
    int breath;
};
class tra:virtual public tri{
    protected:
    float pl1;
    float pl2;
    float h1;
};
class area:public squ,public rec,public tra{
    public:
     void getdata(){
        cout<<"enter the base and height of the triangle : "<<endl;
        cin>>base>>height;
        cout<<"enter the side of the square : "<<endl;
        cin>>side;
        cout<<"enter the length & breath of the rectangle : "<<endl;
        cin>>length>>breath;
        cout<<"enter the pl1,pl2,h1 of the trapezium :"<<endl;
        cin>>pl1>>pl2>>h1;
     }
     void display(){
        cout<<"the area of the triangle is :"<<0.5*base*height<<endl;
        cout<<"the area of the square is :"<<side*side<<endl;
        cout<<"the area of the rectangle is :"<<length*breath<<endl;
        cout<<"the area of the trapezium is :"<<0.5*(pl1+pl2)*h1<<endl;
     }
};
int main(){
    area p;
    p.getdata();
    p.display();
       
    return 0;
}