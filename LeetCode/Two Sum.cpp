
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int tmp = nums[i];
            for(int j = 1; j < nums.size(); j++){
                if(j == i)
                    continue;
                if(nums[j] + tmp == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};