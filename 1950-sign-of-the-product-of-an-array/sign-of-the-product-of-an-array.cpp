class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res=1;

        for(int i=0;i<nums.size();i++) 
        {
            if(nums[i]==0)
            {
                return 0;  
            }
            if(nums[i]<0) {
                res=-res; 
            }
        }
        return res;
    }
};
