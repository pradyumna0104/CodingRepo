#include <iostream>
using namespace std;
class  first{
    int a;
    public:
    first(){
        a = 10;
    }
    void display(){
        cout<<"\n a = "<<a;
    }
};
class  second:public first{
    int b;
    public:
    second(){
        b = 20;
    }
    void display(){
        cout<<"\n b = "<<b;
    }
};
int main(){
    first f,*p;
    p = &f;
    p->display();
    second e;
    p = &e;
    p->display();
    return 0;
}