class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> mp;
        int len = nums.size();

        for(int i = 0 ;i < len;i++){
            if(mp.count(nums[i]) > 0){
                return nums[i];
            }

            mp.insert(nums[i]); 
           }

        return -1;
    }
};