//decimal to binary conversion
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans = 0.0f;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        
        ans = (bit * pow(10, i) ) + ans;
        
        n = n >> 1;
        i++;
    }
    cout<<ans<<endl;;
    return 0;
}