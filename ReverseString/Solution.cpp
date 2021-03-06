class Solution {
public:
    string reverseString(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            char c = s[l];
            s[l] = s[r];
            s[r] = c;
            l++;
            r--;
        }
        return s;
    }
};
