class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int m=INT_MAX,odd=0;
        for(int x:nums1){
            m=min(m,x);
            if(x%2==1){
                odd++;
            }
        }
        return m%2 || odd==0;
    }
};