int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int s =0;
	int e = arr.size()-1;
	int mid = s+(e-s)/2;
	while(s<e){
		if(mid%2 == 1){
			mid--;
		}
		if(arr[mid] == arr[mid+1]){
			s = mid+2;
		}else{
			e = mid;
		}
		mid = s+(e-s)/2;
	}
	return arr[s];
}