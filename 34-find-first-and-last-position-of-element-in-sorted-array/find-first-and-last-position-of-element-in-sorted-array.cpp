class Solution {
    int first(vector<int> &nums , int x){
        int low =0, high = nums.size() - 1;
        int resLow  =-1;
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] < x)
            low = mid +1;

            else if(nums[mid] > x)
            high = mid -1;

            else{
                resLow = mid;
                high = mid -1;
            }
        }
        return resLow;
    }
     int last(vector<int> &nums , int x){
        int low =0, high = nums.size() - 1;
        int resHigh  =-1;
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] < x)
            low = mid +1;

            else if(nums[mid] > x)
            high = mid -1;

            else{
                resHigh = mid;
                low = mid + 1;
            }
        }
        return resHigh;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int start = first(nums,target);
       int end = last(nums,target);
        return {start,end} ;
    }
};