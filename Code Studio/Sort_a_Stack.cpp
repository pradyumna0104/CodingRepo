#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
	vector<int> arr;
	while(!stack.empty()){
		arr.push_back(stack.top());
		stack.pop();
	}
	sort(arr.begin(),arr.end());
	for(int i = 0;i<arr.size();i++){
		stack.push(arr[i]);
	}
}