class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size();
        int l = 0;
        int r = n;
        int m = 0;
        while (l < r) {
            m = l + (r - l) / 2;
            if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        if (l == n || nums[l] != target) {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        res.push_back(l);
        l = 0;
        r = n;
        while (l < r) {
            m = l + (r - l) / 2;
            if (nums[m] <= target) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        res.push_back(l - 1);
        return res;
    }
};
