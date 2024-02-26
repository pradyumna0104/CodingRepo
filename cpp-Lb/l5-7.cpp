#include <iostream>
using namespace std;
int main(){
    /*
    for (int i = 1; i <= 5; i--)
    {
        cout<<i<<" ";
        i++;
    }
    //output = 111111.....
    */
    /*
    for (int i = 0; i <=15; i+=2)
    {
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
    //output = 0 3 5 7 9 11 13 15
    */
   /*
   for (int i = 1; i < 5; i++)
    {
        for (int j  = i; j <= 5; j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    output = 
    1 1
    1 2
    1 3
    1 4
    1 5
    2 2
    2 3
    2 4
    2 5
    3 3
    3 4
    3 5
    4 4
    4 5  
   */
  /*
   for (int i = 1; i < 5; i++)
    {
        for (int j  = i; j <= 5; j++)
        {
            if (i+j == 10)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
     output = 
    1 1
    1 2
    1 3
    1 4
    1 5
    2 2
    2 3
    2 4
    2 5
    3 3
    3 4
    3 5
    4 4
    4 5
  */
    return 0;
}