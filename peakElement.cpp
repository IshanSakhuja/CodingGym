//https://leetcode.com/problems/find-peak-element/submissions/
int findPeakElement(vector<int>& nums) {
        int i,j;
        if(nums.size() == 1)
            return 0;
        for(i=0;i<nums.size();i++)
        {
            if(i == 0)
            {
                if(nums[i+1] < nums[0])
                    return 0;
            }
            else if(i == nums.size()-1)
            {
                if(nums[i-1] < nums[i])
                    return i;
            }
            else if(nums[i-1] < nums[i] && nums[i+1] < nums[i])
                return i;
        }
        return -1;