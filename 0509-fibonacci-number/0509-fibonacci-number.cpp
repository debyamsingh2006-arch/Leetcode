class Solution {
public:
    int fib(int n) {
        if(n<=0){
            return 0;
        }
        int a=0,b=1,temp,sum=0;
        for (int i=0;i<n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        return a;
    }
};