class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        bool flag = false;
        if(digits[n] < 9)
            digits[n]++;
        else{
            digits[n] = 0;
            for(int i = n-1; i >= 0; i--){
                if(digits[i] == 9)
                    digits[i] = 0;
                else if(digits[i] != 9){
                    digits[i]++;
                    break;
                }
            }
        }
        for(int i = 0; i <= n; i++){
            if(digits[i] != 0)
                flag = true;
        }
        if(flag)
            return digits;
        else{
            digits.push_back(0);
            digits[0] = 1;
            return digits;
        }
    }
};