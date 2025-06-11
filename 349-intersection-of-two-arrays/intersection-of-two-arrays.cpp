class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        set<int> seen;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(seen.find(nums1[i])==seen.end())
                    {
                        res.push_back(nums1[i]);
                        seen.insert(nums1[i]);
                    }
                    break;
                }
            }
       }        
        return res;
    }
};
