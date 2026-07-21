class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> f(256,0);
        int low=0;
        int res = INT_MIN;

        for(int high = 0; high < n; high++) {

    f[s[high]]++;

    // Instead of find(f)
    int maxcount = max(maxcount, f[s[high]]);

    int len = high - low + 1;
    int diff = len - maxcount;

    while(diff > k) {
        f[s[low]]--;
        low++;

        len = high - low + 1;
        diff = len - maxcount;
    }

    res = max(res, len);
}
        return res;
        
    }
};