//square root precsie 
#include <iostream>
using namespace std;
long long int bs(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = 0;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecisize(int n,int precision,int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i = 0; i<precision;i++){
        factor = factor/10;
        for(double j = ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int tempsol = bs(n);
    cout<<"sqrt is = "<<moreprecisize(n,3,tempsol);
    return 0;
}