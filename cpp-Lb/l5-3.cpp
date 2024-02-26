//sum of all number tiil n
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<"sum of all number till "<<n<<" is: "<<sum;
    
    return 0;
}
