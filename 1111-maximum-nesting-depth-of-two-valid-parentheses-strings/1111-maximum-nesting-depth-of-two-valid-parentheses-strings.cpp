class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int ans=0, n=seq.size();
        vector<int>res(n);
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
                ans++;
                res[i]=ans%2;
            }
            else{
                res[i]=ans%2;
                ans--;
            }
        }
        return res;
    }
};