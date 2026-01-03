class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        

        int max_val = INT_MIN;

        int cur_sum = 0;

        for(auto &it : nums){
            cur_sum += it;

            if(cur_sum > max_val){
                max_val = cur_sum;
            }

            if(cur_sum < 0){
                cur_sum = 0;
            }
        }

        return max_val;
    }
};