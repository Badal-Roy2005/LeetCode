class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int break_point = -1;

        for(int i = nums.size() - 1; i>0;i--){
            if(nums[i] > nums[i-1]){
               break_point = i - 1;
               break;
            }
        }
        if(break_point == -1) reverse(nums.begin(),nums.end());
        else{

        for(int i = nums.size() - 1; i>break_point;i--){
            if(nums[i] > nums[break_point]){
              swap(nums[break_point] , nums[i]);
              break;
            }
        }
        reverse(nums.begin() + break_point + 1, nums.end());
        }
        
    }
};