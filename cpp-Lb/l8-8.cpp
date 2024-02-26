#include <iostream>
using namespace std;
int fact(int n){
    int ans = 1;
    for(int i = 1;i<=n;i++){
         ans = ans * i;
    }
    return ans;
}
int nCr(int n, int r){
    int nume= fact(n);
    int dunm = fact(r)*fact(n-r);
    return nume/dunm; 
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"factorial is : "<<fact(a)<<endl;
    cout<<"factorial is : "<<fact(b)<<endl;
    cout<<"nCr is : "<<nCr(a,b)<<endl;

    return 0;
}