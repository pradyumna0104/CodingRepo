#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
     int cnt_one=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        arr[i]=1;
        else
        {
            arr[i]=-1;
            cnt_one++;
        }
    }
    int cursum=arr[0];
    int maxsum=arr[0];
    for(int i=1;i<n;i++)
    {
        cursum=max(arr[i],cursum+arr[i]);
        maxsum=max(cursum,maxsum);
    }
    return max(maxsum,0)+cnt_one;
}