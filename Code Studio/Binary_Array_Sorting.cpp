#include <bits/stdc++.h>
vector<int> sortBinaryArray(vector<int> arr, int n)  {
	sort(arr.begin(),arr.end());
	 vector<int> ans;
	for(int i = 0;i<n;i++){
		ans.push_back(arr[i]);
	}
	return ans;
}