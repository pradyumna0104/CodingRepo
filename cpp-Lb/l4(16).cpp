/* for n = 5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        //for 1st half triangle
        int j = n - i + 1;
        int k = 1;
        while (j>=1)
        {
            cout<<" "<<k<<" ";
            k++;
            j--;
        }
        //for space or *'s
        int m = 1;
        while(m <= (i-1)*2){
            cout<<" * ";
            m++;
        }
        //for 2nd half triangle
        int o = n - i + 1;
        int p = n;
        while (o>=1)
        {
            cout<<" "<<p<<" ";
            p--;
            o--;
        }
        i++;
        cout<<endl;
        cout<<endl;
    }
    
    return 0;
}