class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int max1=INT_MIN, min1=INT_MAX, c1, c2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1){
                max1=nums[i];
                c1=i;
            }
            if(nums[i]<min1){
                min1=nums[i];
                c2=i;
            }
        }
        int left=max(c1,c2)+1;
        int right=nums.size()-min(c1,c2);
        int both=(min(c1,c2)+1)+(nums.size()-max(c1,c2));

        return min({left, right, both});
    }
};