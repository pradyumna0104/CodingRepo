#include<bits/stdc++.h>
int *getProductArrayExceptSelf(int* arr, int n)
{
    int MOD = 1000000007;
    int* result = new int[n];
    if(n<1) return result;
    int product =1;
    for(int i=0; i<n;i++){
        product = (int)(((long)product * arr[i])%MOD);
        result[i] = product;
    }
    int products = 1;
        for(int i=n-1; i>0; i--){
            result[i] = (int)(((long)result[i-1] * products)%MOD);
            products = (int)(((long)products * arr[i])%MOD);
        }
        result[0] = products;
        return result;
}