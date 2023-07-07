class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> dic;
        for(int i = 0; i < nums.size(); i++){
            if(dic[nums[i]]){
                nums.erase(nums.begin() + i);
                i--;
            }
            dic[nums[i]]++;
        }
        return dic.size();
    }

    // ANOTHER SOLUTION
//public:    
    // int removeDuplicates(vector<int>& nums) {
    //     map<int, int> dic;
    //     for(int i = nums.size() - 1; i >= 0; i--){
    //         if(dic[nums[i]]){
    //             nums.erase(nums.begin() + i);
    //             //i--;
    //         }
    //         dic[nums[i]]++;
    //     }
    //     return dic.size();
    // }
};