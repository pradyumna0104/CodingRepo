#include <iostream>
using namespace std;
int main(){
    int num = 1;
    //if we don't use break statement then after perfect matching every case will execute
    switch(num){
        case 1: cout<<"first"<<endl;
        //break;
        case 2: cout<<"second"<<endl;
        //break;
        default: cout<<"default case"<<endl;
    }
    //output : first
    //         second
    //         default case
    return 0;
}