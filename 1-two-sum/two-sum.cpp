class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n = nums.size();
    int low = 0, high = n - 1;

    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++)
        arr.push_back({nums[i], i});

    sort(arr.begin(), arr.end());

    while(low < high){
        int sum = arr[low].first + arr[high].first;

        if(sum == target){
            return {arr[low].second, arr[high].second};
        }
        else if(sum < target){
            low++;
        }
        else{
            high--;
        }
    }
    return {};
    }
};