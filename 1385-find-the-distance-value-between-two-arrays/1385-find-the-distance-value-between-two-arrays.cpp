class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int x : arr1) {
            // Find the first element in arr2 that is greater than or equal to (x - d)
            auto it = std::lower_bound(arr2.begin(), arr2.end(), x - d);
            
            // Check if the element is out of range [x - d, x + d]
            if (it == arr2.end() || *it > x + d) {
                ++ans;
            }
        }
        return ans;
    }
};