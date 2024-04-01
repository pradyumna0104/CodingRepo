#include <bits/stdc++.h> 
vector<int> copyAndReverse(vector<int> arr, int n) {
	vector<int> ans;
	for(int i = n-1;i>=0;i--){
		ans.push_back(arr[i]);
	}
	return ans;
}	