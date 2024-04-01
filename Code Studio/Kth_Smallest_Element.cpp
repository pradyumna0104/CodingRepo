#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int n,int k,vector<int> Arr)
{
    sort(Arr.begin(),Arr.end());
    return Arr[k-1];
}