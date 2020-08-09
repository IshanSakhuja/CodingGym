//https://leetcode.com/problems/contains-duplicate/submissions/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> ishan;
        int i,j,temp,a,b,size;
        for(i=0;i<nums.size();i++)
        {
            if(ishan.find(nums[i]) != ishan.end())
                return true;
            else
                ishan.insert(nums[i]);
        }
        return false;
}