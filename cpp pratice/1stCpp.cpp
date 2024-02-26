#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int targetsum=7;
    int size=5;
    int ans=0;

    for (int i=1;i<size;i++)
    {
        for (int j= i;j<size;j++)
        {
            if (arr[i] + arr[j] == targetsum)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}