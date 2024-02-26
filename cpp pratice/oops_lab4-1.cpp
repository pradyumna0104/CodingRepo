#include <iostream>
using namespace std;
class A{
    int n;
    public:
    A(){
        n = 0;
    }
    void getdata(){
        cout<<"enter a number"<<endl;
        cin>>n;
    }
    A operator!=(A b){
        if(n!=b.n){
            cout<<"1st number is not equal with 2nd number"<<endl;
        }
        else
        {
            cout<<"1st number is equal with 2nd number"<<endl;
        }
    }
};
int main(){
    A c,d;
    c.getdata();
    d.getdata();
    c!=d;
    return 0;
}