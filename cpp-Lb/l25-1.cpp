#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;
    //address operator - &
    cout<<"address is : "<<&num<<endl; 
    //pointer *ptr (to store address)
    int *ptr = &num;
    //ptr is a pointer to int
    cout<<"address is : "<<ptr<<endl; 
    cout<<"value is : "<<*ptr<<endl; 
    cout<<"size of integer is : "<<sizeof(num)<<endl;//4
    cout<<"size of pointer is : "<<sizeof(ptr)<<endl;//8
    double d = 4.2;
    double *p2 = &d;
    cout<<"size of double is : "<<sizeof(d)<<endl;//4
    cout<<"size of pointer is : "<<sizeof(p2)<<endl;//8
    return 0;
}