class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n= nums.size();
        int num=nums[n/2];
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        if(mp[num]==1){
            return true;
        }
        return false;
    }
};