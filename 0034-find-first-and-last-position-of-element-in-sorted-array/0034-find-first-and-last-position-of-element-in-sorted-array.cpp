class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        vector<int> arr = {-1, -1};
        while(low<=high){
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            if (nums[mid] == target)
                arr[0] = mid;
        }
        
        low=0, high=nums.size()-1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(nums[mid]<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            if(nums[mid]==target)
                arr[1]=mid;
        }
        return arr;
    }
};