class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int ans = 1;
        for(auto it : nums){
            if(ans == it) ans++;
        }
        return ans;
    }
};