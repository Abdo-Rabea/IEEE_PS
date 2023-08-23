class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        short n = nums.size();
        vector<int> ans(2*n);
        for(short i=0;i<n; i++)
            ans[i] = ans[i+n] = nums[i];
        return ans;
    }
};