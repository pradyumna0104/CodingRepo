#include <bits/stdc++.h> 
vector < int > productPuzzle(vector < int > & arr, int n) {
    long long int p=1,m =1e9+7;
    vector<int> ans(n,0);
    for (int i = 0; i < n; i++) {
       ans[i]=p%m;
       p=((p%m)*(arr[i]%m)%m);
       if(p==0) return ans;
    }
    p=1;
    for (int i = n - 1; i >= 0; i--) {
      ans[i]=((ans[i]%m)*(p%m))%m;
      p=((p%m)*(arr[i]%m)%m);
       if(p==0) return ans;
    }
    return ans;
}