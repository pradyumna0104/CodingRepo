//sqrt(x)
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
int main(){
    int n;
    cin>>n;
    cout<<"sqrt is = "<<bs(n)<<endl;
    return 0;
}