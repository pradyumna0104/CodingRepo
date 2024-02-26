//even or odd checker
#include <iostream>
using namespace std;
void isevenorodd(){
    int num;
    cin>>num;
    if(num&1){
        cout<<" odd!.."<<endl;
    }
    else
        cout<<" even!.."<<endl;
}
int main(){
    isevenorodd();
    return 0;
}