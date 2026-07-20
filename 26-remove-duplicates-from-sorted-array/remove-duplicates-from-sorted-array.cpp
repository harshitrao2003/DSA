class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(nums.size() == 0) return 0;

        int low = 0;
        int unique = 1;
        int high = 1;

        while(high < n){
            if(nums[high] == nums[high-1]){
                high++;
            }
            else{
                nums[low+1] = nums[high];
                low++;
                unique++;
                high++;
            }
        }
        return unique;
    }
};