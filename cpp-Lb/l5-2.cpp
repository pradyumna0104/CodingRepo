//print 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //initilization
    int i = 1;
    for (;;)
    {
        //condition
        if(i<=n){
        cout<<i<<" ";
        }
        else{
            break;
        }
        //upgradation
        i++;
    }
    
    return 0;
}