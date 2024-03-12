#include<vector>

// Function to swap two integers 'a' and 'b'.
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n = a.size(), m = b.size();
	int i = 0, j = 0, k = n - 1;
	
	// Iterating over 'A' and 'B'.
	while(i <= k && j < m){
		if(a[i] < b[j]){
			++i;
		}
		else{
			
			// Swapping the current element of 'B' with the 'kth' element of 'A'.
			swap(a[k], b[j]);
			++j;
			--k;
		}
	}

	// Sorting the array 'A'.
	sort(a.begin(), a.end());
	
	// Sorting the array 'B'.
	sort(b.begin(), b.end());
}