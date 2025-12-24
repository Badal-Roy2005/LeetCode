class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     unordered_map<int,int> mp;

     int len = nums.size();
     for(int i = 0 ;i < len; i++){
        int rem = target - nums[i];
        if(mp.find(rem) != mp.end()){
            return {i , mp[rem]};
        }

        mp[nums[i]] = i;
     }   

     return {};
    }
};