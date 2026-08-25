class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            int item=k*i;
            if(!mp[item]){
                return item;
            }
        }
        return k*(n+1);
    }
};