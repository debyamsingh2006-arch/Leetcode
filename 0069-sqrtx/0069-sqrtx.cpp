class Solution {
public:
    int mySqrt(int x) {
        for (long long i=0;i<INT_MAX/10;i++){
            if(x==i*i || ( x>i*i && x<(i+1)*(i+1) ) ){
                return i;
                break;
            }
        }
        return 0 ;
    }
};