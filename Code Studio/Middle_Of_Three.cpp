#include <bits/stdc++.h> 
int middleOfThree(int x, int y, int z)
{
    // Write your code here   
    if((x<y && x>z)||(x>y && x<z)){
        return x;
    }else if((y<x && y>z)||(y>x && y<z)){
        return y;
    }else{
        return z;
    }
}