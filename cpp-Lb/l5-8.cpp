#include <iostream>
using namespace std;
int main(){
    int a = 3;
    cout<<a<<endl;//3
    if(true){
        int a = 5;
        int b = 6;
        cout<<a<<endl;//5
    }
    cout<<a<<endl;//3
    //cout<<b<<endl;
    //we can't acess b out side the scope
    

    //int a = 7;
    //we can't redefine a in a same place 
    return 0;
}