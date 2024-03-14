#include <bits/stdc++.h> 
long lcmcal(long n,long m){
	return (n*m)/__gcd(n,m);
}
long lcmSum(long n) {
	// Write your code here.
	long sum = 0;
	for(int i =1;i<=n;i++){
		sum += lcmcal(i,n);
	}
	return sum;
}