class Solution {
public:
    bool isPalindrome(int x) {
        string strX = to_string(x);
        string reversedX = strX;
        reverse(reversedX.begin(), reversedX.end());

        return strX == reversedX;
        ;
    }
};