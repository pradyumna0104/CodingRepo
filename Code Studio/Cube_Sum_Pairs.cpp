#include <bits/stdc++.h> 
bool iscube(int a){
    for(int i =0;i*i*i<=a;i++){
        if(i*i*i == a){
            return true;
        }
    }
    return false;
}
int countCubeSumPairs(int n) {
    // Write your code here.
    int cube = 0;
    for(int i =0;i<n;i++){
        int k=n-i,c=i;
        if(iscube(k) && iscube(c)){
            cube++;
        } 
    }
    return cube;
}