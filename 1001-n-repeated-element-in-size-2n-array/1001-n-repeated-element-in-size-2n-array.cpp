class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int len = nums.size();

        for(int i = 0 ;i < len;i++){
            if(mp[nums[i]] == 1){
                return nums[i];
            }

            mp[nums[i]]++;
        }

        return -1;
    }
};