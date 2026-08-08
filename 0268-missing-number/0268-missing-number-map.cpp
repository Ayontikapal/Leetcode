class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int max = nums.size(), min = 0;
        for(int i : nums){
            mp[i]++;
        }
        for(int i = min; i <= max; i++){
            if(mp[i] == 0){
                return i;
            }
        }
        return -1;
    }
};
