#include <iostream>
using namespace std;
int main(){
    //pointer to int is created ,and pointing to some garbage address
    // int *p ; //bad pratice
    //cout<<*p<<endl;
    /*
    int i =5;
    //intialize type 1
    int *p = 0;
    p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    //intialize type 2
    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<(sizeof(q))<<endl;
    */
    int num = 9;
    
    //here create a new  copy named 'a' and increase that but actual numm value can't increase
    int a = num;
    cout<<"before num "<<num<<endl;//9
    a++;
    cout<<"after num "<<num<<endl;//9
    
    //here   no new copy is craeted ,so that increase the pointer value resulting increase the num value
    int *ptr = &num;
    cout<<"before num "<<num<<endl;//9
    (*ptr)++;
    cout<<"after num "<<num<<endl;//10


    return 0;
}