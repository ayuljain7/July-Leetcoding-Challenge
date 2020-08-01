class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        /*
        //Time =O(n) and Space =O(n)
        unordered_map <int,int> Hash;
        for(int i=0;i<nums.size();i++)
        {
            if(Hash.find(nums[i])==Hash.end())
            {
                Hash[nums[i]]=1;
            }
            else
                Hash[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(Hash[nums[i]]==1)
                ans.push_back(nums[i]);
        }
        return ans;
        */
        // Pass 1 : 
        // Get the XOR of the two numbers we need to find
        int diff=0;
        for(int i=0;i<nums.size();i++)
        {
            diff=diff^nums[i];
        }
        // Get its last set bit
        diff=diff & (-diff);
        //cout<<diff<<" ";
        vector<int> ans={0,0};
        for(int i=0;i<nums.size();i++)
        {
            if((diff & nums[i]) == 0) // the bit is not set
            {
                
                ans[0]=ans[0]^nums[i];
                //cout<<ans[0]<<" ";
            }
            else //the bit is set
            {
                ans[1]=ans[1]^nums[i];
            }
        }
        return ans;
    }
};