int calcGCD(int n, int m){
    // Write your code here.
    while(n>0 && m>0){
        if(n>m) n = n%m;
        else m = m%n;
    }
    if(m==0)  return n;
    else return m;
}