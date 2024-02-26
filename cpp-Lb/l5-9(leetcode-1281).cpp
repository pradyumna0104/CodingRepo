//leetcode 1281
//substract the product and sum of digits of an integer
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product = 1,sum = 0;
    while(n!=0){
        int resedue = n % 10;
        product *= resedue;
        sum += resedue;
        n = n/10;
    }
    int ans = product - sum;
    //cout<<product<<endl;
    //cout<<sum<<endl;
    cout<<ans<<endl;
    return 0;
}