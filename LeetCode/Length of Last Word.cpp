class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                flag = true;
                continue;
            }
            if (flag) {
                c = 1;
                flag = false;
            } else
                c++;
        }
        return c;
    }
};