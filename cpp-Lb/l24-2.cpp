#include <iostream>
using namespace std;
int gcd(int a,int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    //return a; is also possible
    return b;
}
int main(){
    int a,b;
    cout<<"enter two number : ";
    cin>>a>>b;
    cout<<"gcd of this is : "<<gcd(a,b);
    return 0;
}