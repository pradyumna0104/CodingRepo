#include <iostream>
using namespace std;
//pass by value
void passbyvalue(int n){
    n++;
    cout<<"n is "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    passbyvalue(n);
    cout<<"main n is : "<<n<<endl;
    
    return 0;
}