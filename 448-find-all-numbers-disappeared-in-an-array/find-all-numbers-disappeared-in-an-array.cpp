class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
     {
        vector<int>ans;
    
        for(int i=0;i<nums.size();i++)
        {
            nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
        }

        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]>0) ans.push_back(j+1);
        }
        return ans;
    }
};