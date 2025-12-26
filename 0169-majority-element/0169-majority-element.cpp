class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cur = 0;
        int count = 0;
        int len = nums.size();

        for(int i = 0 ;i < len; i++){
            if(count == 0){
                cur = nums[i];
                count++;
            }else if( nums[i] == cur){
                count++;
            }
            else{
                count--;
            }

          
        }

        return cur;
    }
};