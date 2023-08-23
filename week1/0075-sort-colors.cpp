class Solution {
public:
    void sortColors(vector<int>& nums) {
        short l =0, r=nums.size()-1;
        for(int i = 0; i<=r;){
            if(nums[i]==0)
                swap(nums[i], nums[l++]);
            else if(nums[i]==2)
                swap(nums[i], nums[r--]);
            else
                i++;
            if(i<l)
                i=l;
        }
    }
};