/*
    1
   121
  12321
 1234321     
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //for space print
        int j = n- i;
        while(j>=1){
            cout<<" ";
            j--;
        }
        //for 1st half tringle print
        int k = 1;
        while (k<=i)
        {
            cout<<k;
            k++;
        }
        //for 2nd half trianglr print
        int l = i-1; 
        while(l>=1){
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}