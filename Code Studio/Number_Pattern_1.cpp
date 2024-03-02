#include <bits/stdc++.h> 
void printPattern(int n) {
    int row=1;
    int start = row;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<start;
            col++;
        }
        cout<<endl;
        row++;
    }
}