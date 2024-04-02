//58. Length of Last Word
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int count = 0;
        bool foundWord = false;
        for (char ch : s) {
            if (!foundWord && ch == ' ')
                continue;
            foundWord = true;
            if (ch != ' ')
                count++;
            else
                break;
        }
        return count;
    }
};
