#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void sum(complex c1,complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void display(void){
        cout<<"complex no. is = "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex p,q,r;
    p.setdata(3,4);
    p.display();
    q.setdata(9,8);
    q.display();
    cout <<"after addition ";
    r.sum(p,q);
    r.display();

    return 0;
}