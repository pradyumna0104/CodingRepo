#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the base : ";
    cin>>n;
    int m;
    cout<<"enter the exponent : ";
    cin>>m;
    int ans = 1;
       for (int i=1;i<=m;i++)
        {
            ans = ans * n;
        } 
    cout<<ans;
    return 0;
}