class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long start=0,end=0,ans,mid;
        for(int i=0;i<n;i++){
            start = max(start , (long long)weights[i]);
            end+=weights[i];
        }
        while(start<=end){
            mid = start + (end-start)/2;
            int day = 1;
            long long weight = 0;

            for(int i=0;i<n;i++){
                weight+=weights[i];
                if(weight>mid){
                    day++;
                    weight = weights[i];
                }
            }
            if(day<=days){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};