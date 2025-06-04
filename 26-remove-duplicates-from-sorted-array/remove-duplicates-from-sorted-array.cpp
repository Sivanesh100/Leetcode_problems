class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 

        int result=1;
        int n = nums.size();
        
        for (int i=1;i<n;i++)
        {
            if(nums[i-1]!=nums[i]) 
            {
                nums[result]=nums[i];
                result++;               
            }
        }
        return result; 
    }
};
