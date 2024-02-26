//total number of even till n
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,i=0;
    while(i+2 <=n){
        sum++;
        i=i+2;
    }
    cout<<"total even number till "<<n<<" is "<<sum;
    return 0;
}