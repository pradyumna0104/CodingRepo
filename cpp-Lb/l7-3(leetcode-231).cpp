//power of two
//if a number is power of two then return true
#include <iostream>
#include <math.h>
using namespace std;
bool poweroftwo(int n){
    for(int i = 0;i<=30;i++){
        int ans = pow(2,i);
        if(n == ans){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    bool ans = poweroftwo(n);
    cout<<ans<<endl;
    return 0;
}