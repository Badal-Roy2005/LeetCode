class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        int low = 0 ;
        int high = len - 1;
        if(nums[low] <= nums[high]) return nums[low];
        int ans = 5001;
        while(low <= high){
        int mid = low + (high - low) / 2;

        if(nums[low] <= nums[mid]){
        low = mid + 1;
        if(nums[mid] > nums[low]) return nums[low];
        }
        else{
            high = mid - 1;
        }
            
        }

        return 0;
    }
};