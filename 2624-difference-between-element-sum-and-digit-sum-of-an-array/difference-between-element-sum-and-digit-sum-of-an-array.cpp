class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x=0,y=0,z;
        for(int i=0;i<nums.size();i++)
        {   
            int k=nums[i];
             x+=nums[i];
             while(k>0)
             {
                y+=k%10;
                k=k/10;
             }
        }
        return x-y;
    }
};