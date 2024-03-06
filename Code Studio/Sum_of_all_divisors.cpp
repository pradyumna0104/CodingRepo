int sumOfAllDivisors(int n){
	// Write your code here.
	int ans = 0;
	for(int i = 1;i<=n;i++){
		ans+= (n/i) * i;
	}
	return ans;
}