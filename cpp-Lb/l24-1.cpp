#include <iostream>
using namespace std;
bool isprime(int num){
    if(num<1){
        return 0;
    }
    for(int i = 2;i <= num/2 ; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(isprime(n)){
        cout<<n <<" is a prime number .\n";
    }
    else{
        cout<<n <<" is not a prime number .\n";
    }
    return 0;
}