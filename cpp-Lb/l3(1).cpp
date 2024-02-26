//sum of total no. till n
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,i=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum till "<<n<<" is "<<sum;
    return 0;
}