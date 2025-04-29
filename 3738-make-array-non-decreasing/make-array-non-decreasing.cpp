class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {

        int res=0,pre=0;
        for(int i=0;i<nums.size();i++)
        {
            if(pre<=nums[i]) 
            {
                pre=nums[i];
                res++;
            }
        }
        return res;
    
    }
};