class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minbestEnding=nums[0],maxbestEnding=nums[0],ans=abs(nums[0]);
        int n =nums.size();
        for(int i=1;i<n;i++){
            int v1=minbestEnding + nums[i];
            int v2=maxbestEnding + nums[i];
            int v3 = nums[i];

            minbestEnding = min(min(v1,v2),v3);
         
            maxbestEnding = max(max(v1,v2),v3);
          

            ans = max(ans,max(abs(minbestEnding),abs(maxbestEnding)));

        }
        return ans;
    }
};