class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0, j = 1;
        int count = 0;

        while (j < n) {
            if (i == j) {
                j++;
                continue;
            }

            int diff = nums[j] - nums[i];

            if (diff == k) {
                count++;

                i++;
                j++;

                while (j < n && nums[j] == nums[j - 1]) {
                    j++;
                }
            }
            else if (diff < k) {
                j++;
            }
            else {
                i++;
            }
        }

        return count;
    }
};