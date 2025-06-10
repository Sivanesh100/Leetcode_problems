class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

       vector<int> res;

       int n=nums.size()-1;
       
       sort(nums.begin(),nums.end());

       for(int i=0;i<n;i++)
       {
          if(nums[i]==nums[i+1])
          {
             if(res.empty()||res.back()!=nums[i])
             {
                res.push_back(nums[i]);
             }
          }
       }      
        return res;
    }
};