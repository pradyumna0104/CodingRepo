#include <iostream>
using namespace std;
int main(){
    int num = 2;
    char ch = '1';
    char ch1 = 'a';
    switch(num){
        case 1: cout<<"first"<<endl;
        break;
        case 2: cout<<"second"<<endl;
        break;
        default: cout<<"default case"<<endl;
    }
    switch(ch){
        case 1: cout<<"first"<<endl;
        break;
        case '1': cout<<"second"<<endl;
        break;
        default: cout<<"default case"<<endl;
    }
    switch(ch1){
        case 1: cout<<"first"<<endl;
        break;
        case '1': cout<<"second"<<endl;
        break;
        default: cout<<"default case"<<endl;
    }
    return 0;
}