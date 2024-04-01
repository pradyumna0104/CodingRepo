#include<bits/stdc++.h>
string fun(int l,int r,string s){
    int n = s.length();
    while(l>=0 && r<n && s[l]==s[r]){
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}
string longestPalinSubstring(string str) {
    int n = str.length();
    string longest="";
    for (int i = 0; i < n; i++) {
        string ps1 = fun(i, i, str);     // odd length
        string ps2 = fun(i, i + 1, str); // even length
        if (ps1.length() > longest.length())
          longest = ps1;
        if (ps2.length() > longest.length())
          longest = ps2;
    }
    return longest;
}