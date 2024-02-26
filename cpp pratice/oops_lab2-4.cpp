#include <iostream>
using namespace std;
class a{
    protected:
    float radius;
};
class b{
    protected:
    int side;
};
class c{
    protected:
    int length;
    int breath;
    int height;
};
class d:public a,public b,public c{
    public:
     void getdata(){
        cout<<"enter the radius of the circle : "<<endl;
        cin>>radius;
        cout<<"enter the side of the square : "<<endl;
        cin>>side;
        cout<<"enter the length & breath & height of the rectangle : "<<endl;
        cin>>length>>breath>>height;
     }
     void display(){
        cout<<"the area of the circle is :"<<3.14*radius*radius<<endl;
        cout<<"the area of the square is :"<<side*side<<endl;
        cout<<"the area of the rectangle is :"<<length*breath<<endl;
        cout<<"the volume of the circle is :"<<1.33*3.14*radius*radius*radius<<endl;
        cout<<"the volume of the square is :"<<side*side*side<<endl;
        cout<<"the volume of the rectangle is :"<<length*breath*height<<endl;
     }
};
int main(){
    d area;
    area.getdata();
    area.display();
    return 0;
}