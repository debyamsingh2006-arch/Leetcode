class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<bool> vis(n, false); 
        int unplaced = n;
        for (int fruit : fruits) {
            for (int i = 0; i < n; ++i) {
                if (!vis[i] && baskets[i] >= fruit) {
                    vis[i] = true; 
                    unplaced--;    
                    break;       
                }
            }
        }
        return unplaced;
    }
};