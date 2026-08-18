class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans=-1;
        unordered_map<int,int>mp;
        if(k==nums.size()){
            for(int i:nums){
                ans=max(ans,i);
            }
            return ans;
        }
        for(int i=0;i<=nums.size()-k;i++){
            int l=k, j=i;
            while(l){
                mp[nums[j]]++;
                j++;
                l--;
            }
        }
        for(auto it:mp){
            int num=it.first;
            int f=it.second;
            if(f==1){
                ans=max(ans,num);
            }
        }
        return ans;
    }
};