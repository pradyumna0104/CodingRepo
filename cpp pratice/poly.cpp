#include <iostream>
using namespace std;
void info(int age){
    cout<<age<<endl;
}
void info(string name){
    cout<<name<<endl;
}
void info(double num){
    cout<<num<<endl;
}
int main(){
    info(9);
    info("moon");
    info(45.63);
    return 0;
};