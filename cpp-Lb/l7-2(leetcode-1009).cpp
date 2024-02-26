//compliment of base 10 integer
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n == 0)
        return 1;

    int m  = n;
    int mask = 0;
    while(m!=0){
         mask = (mask << 1) | 1;
         m = m >> 1;
    }
    int ans =(~n) & mask;
    cout<<ans<<endl;
    return 0;
}