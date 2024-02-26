/*wap in c++ showing the uses of hybrid inheritance*/
#include <iostream>
using namespace std;
class player{
    protected:
    char name[50];
    int age;
};
class physique:public player{
    protected:
    float weight;
    float height;
};
class location{
    protected:
    int pin;
};
class game:public physique,public location{
    public:
    void getdata(){
        cout<<" enter name  : "<<endl;
        cin>>name;
        cout <<" enter age : "<<endl;
        cin>>age;
        cout <<"/n enter weight : ";
        cin >>weight;
        cout<<"/n enter height : ";
        cin >>height;
        cout<<"/n enter pin : ";
        cin >>pin;
    }
    void display(){
       cout <<"name = "<<name<<endl;
       cout <<"age = "<<age<<endl;
       cout <<"weight = "<<weight<<endl;
       cout <<"height = "<<height<<endl;
       cout <<"pin = "<<pin<<endl;
    }
};
int main(){
    game s;
    s.getdata();
    s.display();
    return 0;
}