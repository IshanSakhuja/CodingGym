https://leetcode.com/problems/rotate-array/submissions/
if(nums.size() == 1)
      return;
reverse(nums.begin(),nums.end());
reverse(nums.begin(),nums.begin()+(k%nums.size()));
reverse(nums.begin()+(k%nums.size()),nums.end());