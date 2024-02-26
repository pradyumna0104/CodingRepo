#include <iostream>
using namespace std;
class A{
    protected:
    int a; 
};
class B:virtual public A{
    protected:
    int b;
};
class C:virtual public A{
    protected:
    int c;
};
class D:public B,public C{
    protected:
    int d;
    public:
    void getdata(){
        cout <<"enter four value \n";
        cin >>a>>b>>c>>d;
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;

    }
};
int main(){
    D gate;
    gate.getdata();
    gate.display();
    return 0;
}