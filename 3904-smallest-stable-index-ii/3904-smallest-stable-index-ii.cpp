class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max1=-1;
        int c=0, cmax=0, i=0;
        while(i<nums.size()){
            max1=max(nums[i],max1);
            if(i==c){
                cmax=max1;
            }
            if(nums[i]< cmax-k){
                c=i+1;
            }
            i++;
        }
        return c<nums.size()?c:-1;
    }
};