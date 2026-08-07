class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> boolean_array(candies.size());
        int maxCandy = *max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>= maxCandy){
                boolean_array[i]=true;
            }else{
                boolean_array[i]=false;
            }
        }
        return boolean_array;
    }
};