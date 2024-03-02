#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int repeat,sum = 0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
		if(arr[i] == arr[i+1]){
			repeat = arr[i];
		}
	}	
	int sto = sum - ((n*(n+1))/2);
	int sub = repeat -sto;
	return {sub,repeat};
}