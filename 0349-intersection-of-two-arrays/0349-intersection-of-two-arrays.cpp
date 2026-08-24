class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> result;
    set_intersection(arr1.begin(), arr1.end(),
                     arr2.begin(), arr2.end(),
                     back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
    }
};