class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> res;
        
        int max=0,min=-1;
        
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]%2!=0) continue;
           res[nums[i]]++;

            if (res[nums[i]]>max||(res[nums[i]]==max&&nums[i]<min))
            {
                max=res[nums[i]];
                min=nums[i];
            }
        }
        return min;
    }
};