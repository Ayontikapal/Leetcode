class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>arr;
        int max=0, min=100;
        for(int i:nums){
            mp[i]++;
            if(max<i){
                max=i;
            }
            if(min>i){
                min=i;
            }
        }
        for(int i=min;i<=max;i++){
            if(mp[i]==0){
                arr.push_back(i);
            }
        }
        return arr;
    }
};