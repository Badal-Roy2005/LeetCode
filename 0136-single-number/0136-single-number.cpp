class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = nums[0];
        for(int i = 1 ; i < len ;i++){
            sum ^= nums[i];
        }

        return sum ; 
    }
};