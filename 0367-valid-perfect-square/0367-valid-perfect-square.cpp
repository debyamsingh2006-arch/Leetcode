class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num<0){
            return false;
        }
        else if (num==0 || num==1){
            return true;
        }
        else{
            for(long long i=1;i<num;i++){
                if(i*i==num){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};