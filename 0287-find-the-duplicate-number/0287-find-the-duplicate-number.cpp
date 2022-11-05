class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, r = nums.size() - 1;
        while (l < r) {
            int m = l + (r - l) / 2, n = 0;
            for (int num : nums) {
                n += num <= m;
            }
            n <= m ? l = m + 1 : r = m;
        }
        return l;
    }
};