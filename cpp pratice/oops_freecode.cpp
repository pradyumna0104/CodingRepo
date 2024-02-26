#include <iostream>
using namespace std;
class abstractEmployee{
    virtual void askforpromotion()=0;
};
class employee :abstractEmployee{
   public:
    string name;
    string company;
    int age;
    void introduceyourself(){
        cout<<"Name = "<<name <<endl;
        cout<<"company = "<<company <<endl;
        cout<<"age = "<<age <<endl;
    }
    void askforpromotion(){
        if (age >30){
            cout<<"Got Promoted ! "<<endl;
        }
        else{
            cout <<"Sorry no Promotion availabale right now.. "<<endl;
        }
    }
};
int main(){
    employee em1;
    em1.name = "Pradyumna";
    em1.company = "TATA";
    em1.age = 38;
    em1.introduceyourself();
    em1.askforpromotion();
    employee em2;
    em2.name = "eshu";
    em2.company = "Tayota";
    em2.age = 19;
    em2.introduceyourself();
    em2.askforpromotion();
    return 0;
}