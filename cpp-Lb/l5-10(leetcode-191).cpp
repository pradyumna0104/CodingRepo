//leetcode 191
// number of 1bits
#include <iostream>
using namespace std;
int main(){
    uint32_t n;
    cin>>n;
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout<< count;
    return 0;
}