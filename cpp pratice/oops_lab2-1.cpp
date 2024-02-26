#include <iostream>
using namespace std;
class a{
    private:
    int x;
    public:
    a(){
        x=20;
    }
    void display1(void){
        cout<<"class a= "<<x<<endl;
    }
};
class b:public a{
    int y;
    public:
    b(){
        y=40;
    }
    void display(void){
        display1();
        cout<<"class b= "<<y<<endl;  
         }
};
int main(){
    b num;
    num.display();
    return 0;
}