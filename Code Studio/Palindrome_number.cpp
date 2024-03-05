bool palindrome(int n)
{
    int sameno=n;
    int reverse=0;
    while(n>0){
    int lastDigit=n%10;
    reverse=(reverse *10)+lastDigit;
    n=n/10;
    }
    if(sameno==reverse){
        return 1;
    }else{
        return 0;
    }
}