/*wap in c++ to show the application of instructer and destructer in inheritance*/
#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"\n constructor base class a";
    }
   ~A(){
        cout<<"\n destructor base class a";
    }
};
class B{
    public:
    B(){
        cout<<"\n constructor base class b";
    }
   ~B(){
        cout<<"\n destructor base class b";
    }
};
class C:public A,public B{
    public:
    C(){
        cout<<"\n constructor derive class c";
    }
   ~C(){
        cout<<"\n destructor derive class c";
    }
};
int main(){
    C c;
    return 0;
}
