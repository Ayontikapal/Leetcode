class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0, ans=0;
        for(int i=0;i<s.length();i++){
            count+=(s[i]=='(')-(s[i]==')');
            if(count < 0) {
                ans++;
                count = 0;
            }
        }
        return ans+count;
    }
};