int trailingZerosInFactorial(int n)
{
	int sum = 0;
	while(n>0){
		n/=5;
		int res = n;
		sum+=res;
	}
	return sum;
}