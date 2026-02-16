class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums, target) , second(nums , target)};
    }

    int first(vector<int>& nums , int target){
        int len = nums.size();
        int ans = -1;
        int low = 0 ;
        int high = len - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] >= target){
                if(nums[mid] == target) ans =  mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }

    int second(vector<int>& nums , int target){
        int len = nums.size();
        int ans = -1;
        int low = 0 ;
        int high = len - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] <= target){
                if(nums[mid] == target) ans =  mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

       
        return ans;
    }
};