//total number of set bit in a&b
/*
    let,
        a = 2 --> 10
        b = 3 --> 11
--------------------
total no. pf 1's = 3
*/
#include <iostream>
using namespace std;
int setbit(int a,int b){
    int count = 0;
    while(a>0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    while(b>0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"answer is : "<<setbit(a,b)<<endl;
    return 0;
}