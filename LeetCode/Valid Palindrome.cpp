// Runtime Details 5ms Beats 67.05% of users with C++ 
// Memory Details 7.31mb Beats 70.07% of users with C++
class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        bool result = true;
        if(len == 1)
             return result;
        for(int i = 0, j = len -1; i < j; i++, j--){
            while(i < len && !isalnum(s[i]))
                i++;
            while(j >= 0 && !isalnum(s[j]))
                j--;
            if(i >= j)
                break;
            if(tolower(s[i]) != tolower(s[j])){
                result = false;
                break;
            }
        }
        return result;
    }
};