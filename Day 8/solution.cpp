class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l=i+1,r=nums.size()-1;
            while(r>l)
            {
                int s=nums[i]+nums[l]+nums[r];
                if(s>0)
                {
                    r--;
                }
                else if(s<0)
                {
                    l++;
                }
                else
                {
                    ans.push_back(vector<int> {nums[i], nums[l], nums[r]});
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(l<r && nums[r]==nums[r-1])
                        r--;
                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};