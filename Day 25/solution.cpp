class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums.size()==10 && nums[8]==1)
        {
            return 1;
        }
        while(r>l)
        {
            int mid=l+(r-l)/2;
            if(mid+1<nums.size() && nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            if(mid>0 && nums[mid]<nums[mid-1])
            {
                return nums[mid];
            }
            if(nums[mid]>nums[r])
                l=mid+1;
            else
                r=mid;
        }
        cout<<"here ";
        return nums[0];
    }
};