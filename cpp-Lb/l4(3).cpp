/*
abcd
efgh
ijkl
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char count='a';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" "<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}