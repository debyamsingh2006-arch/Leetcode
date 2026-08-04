class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = nums[0], mx = nums[0];
        unordered_set<int> s;
        for (int num : nums) {
            mn = min(mn, num);
            mx = max(mx, num);
            s.insert(num);
        }
        vector<int> ans;
        for (int i = mn + 1; i < mx; i++) {
            if (!s.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};