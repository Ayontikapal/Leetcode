class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, mul=1;
        int num=n;
        while(num>0){
            int rem=num%10;
            sum+=rem;
            mul*=rem;
            num/=10;
        }

        if(n%(sum+mul)==0){
            return true;
        }
        return false;
    }
};