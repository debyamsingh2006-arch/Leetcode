class Solution {
public:
    bool isPalindrome(int x) {
        int n,rem,sum=0;
        n=x;
        if(n<0){
            return false;
        }
        while(n!=0){
            rem = n%10;
            n/=10;
            if(sum > INT_MAX/10){
                return false;
            }
            sum = sum*10 + rem;
        }
        if(sum==x){
            return true;
        }else{
            return false;
        }
    }
};