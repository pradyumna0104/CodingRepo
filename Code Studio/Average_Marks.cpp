#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    int a = (m1+m2+m3)/3;
    pair<char,int> ans;
    ans.first = firstLetterOfName;
    ans.second = a;
    return ans;
}
