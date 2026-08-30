class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return true;
            }
            // Important when duplicates exist
            if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
                start++;
                end--;
            }
            else if (arr[start] <= arr[mid]) {
                // Left half is sorted
                if (arr[start] <= target && target < arr[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
            else {
                // Right half is sorted
                if (arr[mid] < target && target <= arr[end]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        return false;
    }
};