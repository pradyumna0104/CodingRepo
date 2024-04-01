#include<bits/stdc++.h>
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int count  = 0;
	for(int i =0;i<n;i++){
		if(arr[i] == x){
			count++;
		}
	}
	return count;
}
