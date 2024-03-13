vector<int> sumOfEvenOdd(int n){
    // Write your code here.
    vector<int> ans;
    int evensum = 0;
    int oddsum = 0;
    while(n>0){
        int last = n%10;
        if(last%2 == 0){
            evensum+=last;
        }else{
            oddsum+=last;
        }
        n/=10;
    }
    ans.push_back(evensum);    
    ans.push_back(oddsum);
    return ans;
}