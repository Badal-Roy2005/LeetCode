class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = nums[0];
        int b = 51;
        int c = 51;

        int n = nums.size();
        for(int i = 1 ;i <n;i++){
            if(nums[i] < b){
                c = b;
                b = nums[i];
            }
            else if(nums[i] < c){
                c = nums[i];
            }
        }

        return a + b + c;
    }
};