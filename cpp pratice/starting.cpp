#include<iostream>
using namespace std;
int main(){
    int n,sto = 0;
    cout <<"enter a number";
    cin >> n;
    for (int i=0;i<=n;i++){
        sto+=i;
    }
    cout <<"sum = "<<sto;
    return 0;
}