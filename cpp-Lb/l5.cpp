#include <iostream>
using namespace std;
int main(){
    int a= 5,b=7;
    int c = a & b;
    cout<<"bit wise and :"<<c<<endl;
    int d = a |b;
    cout<<"bit wise or :"<<d<<endl;
    int e = ~a;
    cout<<"bit wise not :"<<e<<endl;
    int f = a ^ b;
    cout<<"bit wise xor :"<<f<<endl;
    int  g = a<<2;
    cout<<"left shift :"<<g<<endl;
    int  h = a>>2;
    cout<<"right shift :"<<h<<endl;
    int i =  7;
    cout<<(++i)<<endl;//8
    cout<<(i++)<<endl;//8
    cout<<(i--)<<endl;//9
    cout<<(--i)<<endl;//7
    return 0;
}