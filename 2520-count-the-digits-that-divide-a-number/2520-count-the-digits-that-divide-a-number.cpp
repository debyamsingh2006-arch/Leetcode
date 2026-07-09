class Solution {
public:
    int countDigits(int num) {
        int ans=0,temp=num,rem;
        while(num){
            rem=num%10;
            if(temp%rem==0){
                ans+=1;
            }
            num/=10;
        }
        return ans;
    }
};