//prime or not
#include <iostream>
using namespace std;
int isprime(int n){
    for(int i = 2;i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }
           return 1;
}
int main(){
    int n;
    cout<<"enter the number to check for prime :";
    cin>>n;
    isprime(n);
    if(isprime(n)){
        cout<<"the no. "<< n <<" is prime"<<endl;
    }
    else{
        cout<<"the number is not prime"<<endl;
    }
    return 0;
}